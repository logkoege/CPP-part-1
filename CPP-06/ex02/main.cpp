#include "Base.hpp"
#include <cstdlib>
#include <ctime>
#include <string>
#include <iostream>

int main()
{
	srand(time(NULL));
	Base *ptr = generate();
	std::cout << "Creation of a random type (A, B or C)" << std::endl;
	Base &ref = *ptr;
	std::cout << "Creation of a ref to the ptr" << std::endl;
	identify(ptr);
	identify(ref);
	delete ptr;
	return 0;
}