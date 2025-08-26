#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string str) :
name(str),
Hit_points(10),
Energy_points(10),
Attack_damage(0)
{
	std::cout << name << " Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << name << " Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap &other)
{
	this->name = other.name;
	this->Hit_points = other.Hit_points;
	this->Energy_points = other.Energy_points;
	this->Attack_damage = other.Attack_damage;
	std::cout << "Operator called" << std::endl;
	return (*this);
}

ClapTrap::ClapTrap(ClapTrap &other)
{
	this->name = other.name;
	this->Hit_points = other.Hit_points;
	this->Energy_points = other.Energy_points;
	this->Attack_damage = other.Attack_damage;
	std::cout << "ClapTrap " << "Copy called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->Energy_points <= 0 || this->Hit_points <= 0)
	{
		if (this->Hit_points <= 0)
			std::cout << "ClapTrap " << this->name << " can't attack : no Hit points left" << std::endl;
		else
			std::cout << "ClapTrap " << this->name << " can't attack : no Energy left" << std::endl;
		return;
	}
	this->Energy_points--;
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->Hit_points -= amount;
	std::cout << "ClapTrap " << this->name << " as taken " << amount << " damage, " << this->Hit_points << " left" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->Energy_points <= 0 || this->Hit_points <= 0)
	{
		if (this->Hit_points <= 0)
			std::cout << "ClapTrap " << this->name << " can't beRepaired : no Hit points left" << std::endl;
		else
			std::cout<< "ClapTrap " << this->name << " can't beRepaired : no Energy left" << std::endl;
		return;
	}
	this->Energy_points--;
	this->Hit_points += amount;
	std::cout << "ClapTrap "<< this->name << " Repaired " << amount << " Hit points " << this->Hit_points << " left" << std::endl;
}
