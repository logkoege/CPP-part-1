#include "Zombie.hpp"

void randomChump(std::string str)
{
	Zombie zombie(str);
	zombie.announce();
}
