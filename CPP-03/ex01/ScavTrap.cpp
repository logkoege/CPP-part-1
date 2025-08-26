#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(std::string str) : ClapTrap(str)
{
	this->name = str;
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
	std::cout << this->name << " Constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << this->name << " Destructor called" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ClapTrap " << this->name << " is in gate keeper mode" <<std::endl;
}