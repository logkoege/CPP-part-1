#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private :
		Brain *brain;

	public :
		Cat();
		Cat(Cat const &other);
		~Cat();
		Cat &operator=(Cat const &other);

		void makeSound() const;
};