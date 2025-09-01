#pragma once

#include "AAnimal.hpp"

class Brain
{
	private :
		std::string ideas[100];

	public :
		Brain();
		Brain(Brain const &other);
		~Brain();

		Brain& operator=(Brain const &other);
};