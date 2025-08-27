#include "FragTrap.hpp"

FragTrap::FragTrap(std::string str) : ClapTrap(str)
{
	this->name = str;
	this->Hit_points = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
	std::cout << "FragTrap " << this->name << " Constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name << " Destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << " is requesting a high five !" << std::endl;
}
