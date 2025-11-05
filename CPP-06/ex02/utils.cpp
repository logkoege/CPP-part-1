#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "ptr is a A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "ptr is a B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "ptr is a C" << std::endl;
}

void identify(Base &p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "ref is a A" << std::endl;
		return;
	}
	catch (std::exception &e)
	{}

	try
	{
		B& b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "ref is a B" << std::endl;
		return;
	}
	catch (std::exception &e)
	{}

	try
	{
		C& c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "ref is a C" << std::endl;
	}
	catch (std::exception &e)
	{}
}

Base* generate()
{
	srand(time(0));
	int i = 0;
	i = (rand() % 3) +1;
	if (i == 1)
		return new A();
	else if (i == 2)
		return new B();
	else
		return new C();
}