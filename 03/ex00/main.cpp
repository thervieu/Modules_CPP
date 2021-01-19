#include "FragTrap.hpp"

int main()
{
	srand(time(NULL));
	FragTrap ent("FT_example");
	
	ent.rangedAttack("robot");
	ent.meleeAttack("robot");

	ent.beRepaired(20);
	ent.takeDamage(100);
	ent.takeDamage(20);
	ent.beRepaired(50);

	ent.vaulthunter_dot_exe("robot");
	ent.vaulthunter_dot_exe("robot");
	ent.vaulthunter_dot_exe("robot");
	ent.vaulthunter_dot_exe("robot");
	ent.vaulthunter_dot_exe("robot");
}
