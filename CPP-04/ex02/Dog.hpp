#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	private :
		Brain *brain;

	public :
		Dog();
		Dog(Dog const &other);
		~Dog();
		Dog &operator=(Dog &other);

		void makeSound() const;
};