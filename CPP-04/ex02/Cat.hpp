#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
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