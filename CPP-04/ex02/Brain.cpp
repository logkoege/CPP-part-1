#include "Brain.hpp"


Brain::Brain()
{
	int i = 0;
	while(i < 100)
	{
		ideas[i] = "Some Ideas";
		i++;
	}
	std::cout << "Brain Constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}
Brain::Brain(Brain const &other)
{
	int i = 0;
	while(i < 100)
	{
		this->ideas[i] = other.ideas[i];
		i++;
	}
	std::cout << "Brain copy called" << std::endl;
}

Brain& Brain::operator=(Brain const &other)
{
	int i = 0;
	if (this != &other)
	{
		while(i < 100)
		{
			this->ideas[i] = other.ideas[i];
			i++;
		}
	}
	std::cout << "Brain operator = called" << std::endl;
	return (*this);
}
