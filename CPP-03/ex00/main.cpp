#include "ClapTrap.hpp"

int main()
{
	ClapTrap Clap("Clap");
	ClapTrap Trap("Trap");

	std::cout << "Test attack :" << std::endl;
	Clap.attack("Trap");
	Trap.attack("Clap");

	std::cout << "Test taken damage :" << std::endl;
	Clap.takeDamage(5);
	Trap.takeDamage(11);

	std::cout << "Test Repair : " << std::endl;
	Clap.beRepaired(15);
	Trap.beRepaired(9);

	for(int i = 0; i < 11; i++)
	{
		Clap.beRepaired(1);
	}

	return 0;
}