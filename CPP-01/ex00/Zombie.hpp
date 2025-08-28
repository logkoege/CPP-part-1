#pragma once

# include <string>
# include <iostream>


class Zombie {
private:
	std::string name;

public:
	Zombie(std::string name);
	~Zombie();
	void	announce();
};

void	randomChump(std::string name); // stack
Zombie*	newZombie(std::string name); // heap

