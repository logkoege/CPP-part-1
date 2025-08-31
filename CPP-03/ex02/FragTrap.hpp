#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public :

	FragTrap();
	FragTrap(FragTrap &other);
	FragTrap(std::string str);
	~FragTrap();
	FragTrap &operator=(FragTrap &other);
	void highFivesGuys(void);
};