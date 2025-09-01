#pragma once

#include <iostream>
#include <string>
#include <cmath>

class AAnimal
{
	protected :
		std::string type;

	public :
		AAnimal();
		AAnimal(AAnimal const &other);
		virtual ~AAnimal();
		AAnimal &operator=(AAnimal const &other);
		
		virtual void makeSound() const = 0;
		std::string getType() const;
};