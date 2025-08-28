#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name)
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