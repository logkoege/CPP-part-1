#include "PmergeMe.hpp"
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <cstdlib>
#include <ctime>

PmergeMe::PmergeMe() {}
PmergeMe::~PmergeMe() {}

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


void PmergeMe::mergeVec(std::vector<int> &left, std::vector<int> &right, std::vector<int> &v)
{
    size_t i = 0, j = 0, k = 0;

    while (i < left.size() && j < right.size())
    {
        if (left[i] <= right[j])
            v[k++] = left[i++];
        else
            v[k++] = right[j++];
    }
    while (i < left.size())
        v[k++] = left[i++];
    while (j < right.size())
        v[k++] = right[j++];
}


void PmergeMe::fordJohnsonVec(std::vector<int> &v)
{
    if (v.size() <= 1)
        return;

    size_t mid = v.size() / 2;
    std::vector<int> left(v.begin(), v.begin() + mid);
    std::vector<int> right(v.begin() + mid, v.end());

    fordJohnsonVec(left);
    fordJohnsonVec(right);
    mergeVec(left, right, v);
}


void PmergeMe::mergeDeq(std::deque<int> &left, std::deque<int> &right, std::deque<int> &d)
{
    size_t i = 0, j = 0, k = 0;

    while (i < left.size() && j < right.size())
    {
        if (left[i] <= right[j])
            d[k++] = left[i++];
        else
            d[k++] = right[j++];
    }
    while (i < left.size())
        d[k++] = left[i++];
    while (j < right.size())
        d[k++] = right[j++];
}


void PmergeMe::fordJohnsonDeq(std::deque<int> &d)
{
    if (d.size() <= 1)
        return;

    size_t mid = d.size() / 2;
    std::deque<int> left(d.begin(), d.begin() + mid);
    std::deque<int> right(d.begin() + mid, d.end());

    fordJohnsonDeq(left);
    fordJohnsonDeq(right);
    mergeDeq(left, right, d);
}


void PmergeMe::displayBefore() const
{
    std::cout << "Before: ";
    for (size_t i = 0; i < _vec.size(); i++)
        std::cout << _vec[i] << " ";
    std::cout << std::endl;
}

void PmergeMe::displayAfter() const
{
    std::cout << "After:  ";
    for (size_t i = 0; i < _vec.size(); i++)
        std::cout << _vec[i] << " ";
    std::cout << std::endl;
}


void PmergeMe::process(int argc, char **argv)
{
    parseInput(argc, argv);

    displayBefore();

    clock_t startVec = clock();
    fordJohnsonVec(_vec);
    clock_t endVec = clock();

    clock_t startDeq = clock();
    fordJohnsonDeq(_deq);
    clock_t endDeq = clock();

    displayAfter();

    double timeVec = (double)(endVec - startVec) / CLOCKS_PER_SEC * 1000000;
    double timeDeq = (double)(endDeq - startDeq) / CLOCKS_PER_SEC * 1000000;

    std::cout << "Time to process a range of " << _vec.size()
              << " elements with std::vector : "
              << timeVec << " us" << std::endl;

    std::cout << "Time to process a range of " << _deq.size()
              << " elements with std::deque  : "
              << timeDeq << " us" << std::endl;
}
