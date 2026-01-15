#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <deque>
#include <string>

class PmergeMe
{
public:
    PmergeMe();
    ~PmergeMe();
    PmergeMe(PmergeMe &other);
	PmergeMe& operator=(PmergeMe &other);

    void process(int argc, char **argv);

private:
    std::vector<int> _vec;
    std::deque<int>  _deq;

    void parseInput(int argc, char **argv);

    void fordJohnsonVec(std::vector<int> &v);
    void fordJohnsonDeq(std::deque<int> &d);

    void insertSortedVec(std::vector<int> &v, int value);
    void insertSortedDeq(std::deque<int> &d, int value);

    void printBefore() const;
    void printAfter() const;
};

#endif
