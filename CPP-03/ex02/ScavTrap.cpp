#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap()
{
	this->name = "ScavTrap";
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
	std::cout << "ScavTrap " << this->name << " Default Constructor called" << std::endl;
	std::cout << name << " Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string str) : ClapTrap(str)
{
	this->name = str;
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
	std::cout << "ScavTrap " << this->name << " Constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->name << " Destructor called" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " is in gate keeper mode" <<std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->Energy_points <= 0 || this->Hit_points <= 0)
	{
		if (this->Hit_points <= 0)
			std::cout << "ScavTrap " << this->name << " can't attack : no Hit points left" << std::endl;
		else
			std::cout << "ScavTrap " << this->name << " can't attack : no Energy left" << std::endl;
		return;
	}
	this->Energy_points--;
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &other) : ClapTrap()
{
	this->name = other.name;
	this->Hit_points = other.Hit_points;
	this->Energy_points = other.Energy_points;
	this->Attack_damage = other.Attack_damage;
	std::cout << "ScavTrap " << "Copy called" << std::endl;
}