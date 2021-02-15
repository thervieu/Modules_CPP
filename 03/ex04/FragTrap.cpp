/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 13:32:11 by user42            #+#    #+#             */
/*   Updated: 2021/01/19 00:57:35 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_name = "Default";
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
}

FragTrap::FragTrap(std::string name)
{
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_name = name;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	std::cout << "FragTrap Default Constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &other) : ClapTrap(other)
{
	std::cout << "FragTrap Assignation Constructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &other)
{
	(void)other;
	std::cout << _name << ": Hi ! I'm ready !" << std::endl;
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Default Destructor called" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	static const std::string attacks[] = {
	        "Fireball",
	        "Earthball",
	        "Waterball",
	        "Lightball",
	        "Airball"
	};

	if (this->_energyPoints >= 25)
	{
		this->_energyPoints -= 25;
		std::cout <<  "FragTrap <" << _name << "> attacked " << target << " with " << attacks[rand() % 5] << "." << std::endl;
	}
	else
		std::cout <<  "FragTrap <" << _name << "> Crap! not enough energy points !" << std::endl;
}

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FragTrap <" << _name << "> uses his psychic abilities on " << target << " doing "  << _rangedAttackDamage << " damage (ranged attack)" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FragTrap <" << _name << "> uses his fierce fists on " << target  << " doing " << _meleeAttackDamage << " damage (melee attack)" << std::endl;
}