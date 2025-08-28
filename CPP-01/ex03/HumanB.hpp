#pragma once

# include "Weapon.hpp"

class HumanB
{
private:
	std::string name;
	Weapon *weapon;
public:
	HumanB();
	HumanB(std::string n);
	~HumanB();
	void	attack();
	void	setWeapon(Weapon &w);

};
