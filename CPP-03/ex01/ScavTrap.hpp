#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public :
	ScavTrap();
	ScavTrap(ScavTrap &other);
	ScavTrap(std::string str);
	~ScavTrap();
	ScavTrap &operator=(ScavTrap &other);
	void guardGate();
	void attack(const std::string& target);
};
