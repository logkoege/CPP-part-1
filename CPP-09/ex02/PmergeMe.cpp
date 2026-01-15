#include "PmergeMe.hpp"
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <cstdlib>
#include <ctime>

PmergeMe::PmergeMe() {}
PmergeMe::~PmergeMe() {}
PmergeMe::PmergeMe(PmergeMe &other)
{
	(void)other;
}
PmergeMe& PmergeMe::operator=(PmergeMe &other)
{
	(void)other;
	return (*this);
}

void PmergeMe::insertSortedVec(std::vector<int> &v, int value)
{
    size_t i = 0;
    while (i < v.size() && v[i] < value)
        i++;
    v.insert(v.begin() + i, value);
}

void PmergeMe::insertSortedDeq(std::deque<int> &d, int value)
{
    size_t i = 0;
    while (i < d.size() && d[i] < value)
        i++;
    d.insert(d.begin() + i, value);
}


void PmergeMe::parseInput(int argc, char **argv)
{
    for (int i = 1; i < argc; i++)
    {
        std::string s(argv[i]);
        if (s.empty())
            throw std::runtime_error("Error");

        for (size_t j = 0; j < s.size(); j++)
        {
            if (!isdigit(s[j]))
                throw std::runtime_error("Error");
        }

        long n = std::strtol(s.c_str(), NULL, 10);
        if (n < 0 || n > 2147483647)
            throw std::runtime_error("Error");

        _vec.push_back(n);
        _deq.push_back(n);
    }
}


void PmergeMe::fordJohnsonVec(std::vector<int> &v)
{
    if (v.size() <= 1)
        return;
    int last;
    bool haslast = false;
    size_t i = 0;
    size_t k = 0;
    std::vector<int> low;
    std::vector<int> big;
    if (v.size() % 2 != 0)
    {
        haslast = true;
        last = v[v.size() - 1];
        v.pop_back();
        std::cout << "last = " << last << std::endl;
    }
    while (i + 1 < v.size())
    {
        if (v[i] > v[i + 1])
        {
            low.push_back(v[i + 1]);
            big.push_back(v[i]);
        }
        else
        {
            low.push_back(v[i]);
            big.push_back(v[i + 1]);
        }
        i += 2;
        k++;
    }
    fordJohnsonVec(low);
    i = 0;
    while (i< big.size())
    {
        insertSortedVec(low, big[i]);
        i++;
    }

    if (haslast)
        insertSortedVec(low, last);
    v = low; 
}

void PmergeMe::fordJohnsonDeq(std::deque<int> &d)
{
    if (d.size() <= 1)
        return;
    int last;
    bool haslast = false;
    size_t i = 0;
    size_t k = 0;
    std::deque<int> low;
    std::deque<int> big;
    if (d.size() % 2 != 0)
    {
        haslast = true;
        last = d[d.size() - 1];
        d.pop_back();
        std::cout << "last = " << last << std::endl;
    }
    while (i + 1 < d.size())
    {
        if (d[i] > d[i + 1])
        {
            low.push_back(d[i + 1]);
            big.push_back(d[i]);
        }
        else
        {
            low.push_back(d[i]);
            big.push_back(d[i + 1]);
        }
        i += 2;
        k++;
    }
    fordJohnsonDeq(low);
    i = 0;
    while (i < big.size())
    {
        insertSortedDeq(low, big[i]);
        i++;
    }

    if (haslast)
        insertSortedDeq(low, last);
    d = low; 
}


void PmergeMe::printBefore() const
{
    std::cout << "Before: ";
    for (size_t i = 0; i < _vec.size(); i++)
        std::cout << _vec[i] << " ";
    std::cout << std::endl;
}

void PmergeMe::printAfter() const
{
    std::cout << "After:  ";
    for (size_t i = 0; i < _vec.size(); i++)
        std::cout << _vec[i] << " ";
    std::cout << std::endl;
}


void PmergeMe::process(int argc, char **argv)
{
    parseInput(argc, argv);

    printBefore();

    clock_t startVec = clock();
    fordJohnsonVec(_vec);
    clock_t endVec = clock();

    clock_t startDeq = clock();
    fordJohnsonDeq(_deq);
    clock_t endDeq = clock();

    printAfter();

    double timeVec = (double)(endVec - startVec) / CLOCKS_PER_SEC * 100000;
    double timeDeq = (double)(endDeq - startDeq) / CLOCKS_PER_SEC * 100000;

    std::cout << "Time to process a range of " << _vec.size()
              << " elements with std::vec : "
              << timeVec << " us" << std::endl;

    std::cout << "Time to process a range of " << _deq.size()
              << " elements with std::deque  : "
              << timeDeq << " us" << std::endl;
}
