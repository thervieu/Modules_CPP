#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	srand(time(NULL));
	FragTrap ent1("ft_example");
	ScavTrap ent2("st_example");

	ent2.challengeNewcomer("mechant1");
	ent2.challengeNewcomer("mechant2");
	ent2.challengeNewcomer("mechant3");
	ent1.rangedAttack("robot");
	ent2.rangedAttack("trainingbot");
	ent1.meleeAttack("robot");
	ent2.meleeAttack("trainingbot");
	ent1.beRepaired(20);
	ent2.beRepaired(50);
	ent1.takeDamage(100);
	ent1.takeDamage(20);
	ent2.takeDamage(30);
	ent2.takeDamage(100);
	ent1.vaulthunter_dot_exe("robot");
	ent1.vaulthunter_dot_exe("robot");
	ent1.vaulthunter_dot_exe("robot");
	ent1.vaulthunter_dot_exe("robot");
	ent1.vaulthunter_dot_exe("robot");
}
