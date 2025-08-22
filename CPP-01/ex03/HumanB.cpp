#include "HumanB.hpp"

HumanB::HumanB(std::string n) : name(n), weapon(NULL)
{}

HumanB::~HumanB()
{}

void HumanB::attack()
{
	if (weapon)
		std::cout << name << " attacks with their "<< weapon->getType() << std::endl;
	else
		std::cout << name << " has no weapon " << std::endl;
}
void	HumanB::setWeapon(Weapon &w)
{
	weapon = &w;
}
