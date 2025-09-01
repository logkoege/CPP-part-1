#pragma once

#include <iostream>
#include <string>
#include <cmath>

class Animal
{
	protected :
		std::string type;

	public :
		Animal();
		Animal(Animal const &other);
		virtual ~Animal();
		Animal &operator=(Animal const &other);
		
		virtual void makeSound() const;
		std::string getType() const;
		
};
