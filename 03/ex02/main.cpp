#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	srand(time(NULL));
	FragTrap frag("Michel");
	std::cout << std::endl;
	ScavTrap scav("Gregoire");
	std::cout << std::endl;

	frag.meleeAttack("robot");
	frag.rangedAttack("robot");
	std::cout << std::endl;

	scav.meleeAttack("trainingbot");
	scav.rangedAttack("trainingbot");
	std::cout << std::endl;

	frag.beRepaired(20);
	frag.takeDamage(100);
	frag.takeDamage(20);
	std::cout << std::endl;

	scav.beRepaired(50);
	scav.takeDamage(30);
	scav.takeDamage(100);
	std::cout << std::endl;

	frag.vaulthunter_dot_exe("robot 1");
	frag.vaulthunter_dot_exe("robot 2");
	frag.vaulthunter_dot_exe("robot 3");
	frag.vaulthunter_dot_exe("robot 4");
	frag.vaulthunter_dot_exe("robot 5");
	std::cout << std::endl;

	scav.challengeNewcomer("mechant 1");
	scav.challengeNewcomer("mechant 2");
	scav.challengeNewcomer("mechant 3");
	std::cout << std::endl;
}
