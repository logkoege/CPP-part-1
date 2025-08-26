#include "ScavTrap.hpp"

int main()
{
	ScavTrap Scav("Scav");
	ClapTrap Clap("Clap");
	ClapTrap Trap("Trap");

	std::cout << std::endl;
	std::cout << "Test attack :" << std::endl << std::endl;
	Clap.attack("Trap");
	Trap.attack("Scav");
	Scav.attack("Clap");

	std::cout << std::endl;
	std::cout << "Test taken damage :" << std::endl << std::endl;
	Clap.takeDamage(5);
	Trap.takeDamage(11);
	Scav.takeDamage(99);

	std::cout << std::endl;
	std::cout << "Test Repair : " << std::endl << std::endl;
	Clap.beRepaired(15);
	Trap.beRepaired(9);
	Scav.beRepaired(1);

	std::cout << std::endl;
	for(int i = 0; i < 51; i++)
	{
		Scav.beRepaired(1);
	}
	std::cout << std::endl;
	Scav.guardGate();
	std::cout << std::endl;

	return 0;
}