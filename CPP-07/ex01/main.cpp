#include "iter.hpp"

void f(char &str)
{
	if ((str % 2) == 0)
		str = 'c';
	else
		str = 'a';
}

int main()
{
	std::string str = "pipi";
	std::string str2 = "Hello World";
	::iter(str, str.size(), f);
	::iter(str2, str2.size(), f);
	std::cout << "str = " << str << std::endl;
	std::cout << "str2 = " << str2 << std::endl;
	return 0;
}