#pragma once

# include <string>
# include <iostream>

class ClapTrap
{
	protected:

	std::string name;
	int Hit_points; // health
	int Energy_points;
	int Attack_damage;

	public:
	ClapTrap();
	ClapTrap(std::string str);
	ClapTrap(ClapTrap &other);
	~ClapTrap();
	ClapTrap &operator=(ClapTrap &other);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
