#pragma once

# include <string>
# include <iostream>

class Zombie
{
private:
	std::string name;

public:
	void	announce();
	void	setname(std::string name);
};

Zombie*	zombieHorde(int N, std::string name);
