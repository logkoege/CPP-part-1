#include "HumanA.hpp"
#include "HumanB.hpp"

Weapon::Weapon(std::string str) : type(str)
{}

Weapon::~Weapon()
{}

std::string& Weapon::getType()
{
	return type;
}

void Weapon::setType(std::string str)
{
	type = str;
}
