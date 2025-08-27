#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap Clap("Clap");
	ClapTrap Trap("Trap");
	ScavTrap Scav("Scav");
	FragTrap Frag("Frag");

	std::cout << std::endl;
	std::cout << "Test attack :" << std::endl << std::endl;
	Clap.attack("Trap");
	Trap.attack("Scav");
	Scav.attack("Frag");
	Frag.attack("Clap");

	std::cout << std::endl;
	std::cout << "Test taken damage :" << std::endl << std::endl;
	Clap.takeDamage(5);
	Trap.takeDamage(11);
	Scav.takeDamage(99);
	Frag.takeDamage(29);

	std::cout << std::endl;
	std::cout << "Test Repair : " << std::endl << std::endl;
	Clap.beRepaired(15);
	Trap.beRepaired(9);
	Scav.beRepaired(1);
	Frag.beRepaired(3);

	std::cout << std::endl;
	for(int i = 0; i < 51; i++)
	{
		Scav.beRepaired(1);
	}
	
	std::cout << std::endl;
	Scav.guardGate();
	std::cout << std::endl;
	Frag.highFivesGuys();
	std::cout << std::endl;

	return 0;
}