#include "Zombie.hpp"

Zombie::Zombie(std::string str) : name(str)
{
	std::cout << "creation of " << name << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "destruction of " << name << std::endl;
}

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}