#pragma once

#include "Animal.hpp"

class WrongAnimal
{
	protected:
		std::string type;

	public :
		WrongAnimal();
		WrongAnimal(WrongAnimal const &other);
		WrongAnimal &operator=(WrongAnimal const &other);
		~WrongAnimal();

		void makeSound() const;
		std::string getType() const;

};
