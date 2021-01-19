#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	srand(time(NULL));
	SuperTrap ent("hero");
	ent.printStats();
	ScavTrap test("test");

	ent.rangedAttack("testobot");
	ent.meleeAttack("testobot");
	ent.vaulthunter_dot_exe("testobot");
	ent.ninjaShoeBox(test);
}
