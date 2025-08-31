#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->name = "FragTrap";
	this->Hit_points = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
	std::cout << "FragTrap " << this->name << " Default Constructor called" << std::endl;
}


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

FragTrap& FragTrap::operator=(FragTrap &other)
{
	this->name = other.name;
	this->Hit_points = other.Hit_points;
	this->Energy_points = other.Energy_points;
	this->Attack_damage = other.Attack_damage;
	std::cout << "Operator called" << std::endl;
	return (*this);
}

FragTrap::FragTrap(FragTrap &other) : ClapTrap()
{
	this->name = other.name;
	this->Hit_points = other.Hit_points;
	this->Energy_points = other.Energy_points;
	this->Attack_damage = other.Attack_damage;
	std::cout << "FragTrap " << "Copy called" << std::endl;
}