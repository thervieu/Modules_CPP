#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
	srand(time(NULL));
	NinjaTrap ninja("hero");
	std::cout << std::endl;
	ClapTrap clap("uselessbot");
	std::cout << std::endl;
	FragTrap frag("exterminatronc");
	std::cout << std::endl;
	ScavTrap scav("trunkminator");
	std::cout << std::endl;
	NinjaTrap ninja2("trainingbot");

	ninja.rangedAttack("brobot");
	ninja.meleeAttack("brobot");
	std::cout << std::endl;
	ninja.beRepaired(20);
	ninja.takeDamage(100);
	ninja.takeDamage(20);
	std::cout << std::endl;
	ninja.ninjaShoeBox(clap);
	ninja.ninjaShoeBox(frag);
	ninja.ninjaShoeBox(scav);
	ninja.ninjaShoeBox(ninja2);
	std::cout << std::endl;
}
