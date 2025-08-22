#include <string>
#include <iostream>

int	main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "adress of str        = " << &str << std::endl;
	std::cout << "adress held by PTR   = " << stringPTR << std::endl;
	std::cout << "adress of stringREF  = " << &stringREF << std::endl << std::endl;

	std::cout << "value of str         = " << str << std::endl;
	std::cout << "value pointed by PTR = " << *stringPTR << std::endl;
	std::cout << "value of stringREF   = " << stringREF << std::endl;

	return 0;
}