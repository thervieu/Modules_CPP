#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	srand(time(NULL));
	SuperTrap super("hero");
	std::cout << std::endl;
	super.printStats();
	std::cout << std::endl;
	ScavTrap test("test");
	std::cout << std::endl;

	super.rangedAttack("testbot");
	super.meleeAttack("testbot");
	std::cout << std::endl;
	super.vaulthunter_dot_exe("testbot");
	std::cout << std::endl;
	super.ninjaShoeBox(test);
	std::cout << std::endl;
}
