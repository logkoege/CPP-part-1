#include "Zombie.hpp"

Zombie* newZombie(std::string str)
{
	return new Zombie(str);
}