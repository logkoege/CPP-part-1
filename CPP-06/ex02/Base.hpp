#pragma once

#include <exception>
#include <cstdlib>
#include <ctime>
#include <string>
#include <iostream>

class Base
{
	public:
		virtual ~Base();
};

void identify(Base &p);
void identify(Base *p);
Base* generate();