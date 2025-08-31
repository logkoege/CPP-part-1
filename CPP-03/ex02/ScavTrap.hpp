#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public :
	ScavTrap();
	ScavTrap(ScavTrap &other);
	ScavTrap(std::string str);
	~ScavTrap();
	void guardGate();
	ScavTrap &operator=(ScavTrap &other);
	void attack(const std::string& target);
};
