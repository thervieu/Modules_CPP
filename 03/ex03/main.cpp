#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
	srand(time(NULL));
	NinjaTrap ent0("hero");
	ClapTrap ent1("uselessbot");
	FragTrap ent2("exterminatronc");
	ScavTrap ent3("trunkminator");
	NinjaTrap ent4("trainingbot");

	ent0.rangedAttack("brobot");
	ent0.meleeAttack("brobot");
	ent0.beRepaired(20);
	ent0.takeDamage(100);
	ent0.takeDamage(20);
	ent0.ninjaShoeBox(ent1);
	ent0.ninjaShoeBox(ent2);
	ent0.ninjaShoeBox(ent3);
	ent0.ninjaShoeBox(ent4);
	ent0.ninjaShoeBox(ent1);
}
