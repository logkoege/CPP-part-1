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

    void mergeVec(std::vector<int> &left, std::vector<int> &right, std::vector<int> &v);
    void mergeDeq(std::deque<int> &left, std::deque<int> &right, std::deque<int> &d);

    void printBefore() const;
    void printAfter() const;
};

#endif
