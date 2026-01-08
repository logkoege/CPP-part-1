#include "Span.hpp"

Span::Span() : N(11)
{}

Span::Span(int n) : N(n)
{}

Span::~Span()
{}

Span &Span::operator=(Span const &other)
{
	if(this != &other)
		this->N = other.N;
	return(*this);
}
Span::Span(const Span &other)
{
	*this = other;
}


int	Span::shortestSpan()
{
	if (this->victor.size() < 2)
		throw std::exception();
	std::vector<int> temp(this->victor);
	std::sort(temp.begin(), temp.end());
	int j = INT_MAX;
	for (size_t i = 1; i < temp.size(); i++)
	{
		if (temp[i] - temp[i - 1] < j)
			j = temp[i] - temp[i - 1];
	}
	return j;
}

int	Span::longestSpan()
{
	if (this->victor.size() < 2)
		throw std::exception();
	return(*std::max_element(this->victor.begin(), this->victor.end()) - *std::min_element(this->victor.begin(), this->victor.end()));
}

void	Span::addNumber(int num)
{
	if (this->victor.size() < this->N)
		this->victor.push_back(num);
	else
		throw std::exception();
}
