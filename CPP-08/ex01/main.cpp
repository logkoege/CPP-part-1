#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	try
	{
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "error" << std::endl;
	}

	try
	{
		Span t(6);
		t.insertt(sp.victor.begin(), sp.victor.end());
		std::cout << t.shortestSpan() << std::endl;
		std::cout << t.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "error" << std::endl;
	}

	try
	{
		Span u(4);
		u.insertt(sp.victor.begin(), sp.victor.end());
		std::cout << u.shortestSpan() << std::endl;
		std::cout << u.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "error" << std::endl;
	}

	return 0;
}
