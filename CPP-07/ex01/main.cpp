#include "iter.hpp"

void f(char &str)
{
	if ((str % 2) == 0)
		std::cout << ":(" << std::endl;
	else
		std::cout << ";)" << std::endl;
}

int main()
{
	std::string test1 = "hii";
	std::string test2 = "Hello World";
	std::cout << "test1 = " << test1 << std::endl << std::endl;
	::iter(test1, 3, f);
	std::cout << std::endl;
	std::cout << "test2 = " << test2 << std::endl << std::endl;
	::iter(test2, 11, f);
	return 0;
}