#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public :

	ScavTrap(std::string str);
	~ScavTrap();
	void guardGate();
};
