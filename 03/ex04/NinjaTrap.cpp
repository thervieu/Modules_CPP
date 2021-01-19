/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 13:32:11 by user42            #+#    #+#             */
/*   Updated: 2021/01/19 00:57:12 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap()
{
	_hitPoints = 60;
	_maxHitPoints = 60;
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 5;
	_armorDamageReduction = 0;
	_level = 1;
	std::cout << "NinjaTrap Default Constructor called" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 60;
	_maxHitPoints = 60;
	_energyPoints = 15;
	_maxEnergyPoints = 120;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 5;
	_armorDamageReduction = 0;
	_level = 1;
	std::cout << "NinjaTrap Default Constructor called" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &other) : ClapTrap(other)
{
	std::cout << "NinjaTrap Assignation Constructor called" << std::endl;
}

NinjaTrap	&NinjaTrap::operator=(NinjaTrap const &other)
{
	(void)other;
	std::cout << _name << ": Hi ! I'm ready !" << std::endl;
	return (*this);
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "NinjaTrap Default Destructor called" << std::endl;
}

void	NinjaTrap::rangedAttack(std::string const & target)
{
	std::cout << "NinjaTrap <" << _name << "> uses his psychic abilities on " << target << " doing"  << _rangedAttackDamage << " damage (ranged attack)" << std::endl;
}

void	NinjaTrap::meleeAttack(std::string const & target)
{
	std::cout << "NinjaTrap <" << _name << "> uses his fierce fists on " << target  << " doing " << _meleeAttackDamage << " damage (melee attack)" << std::endl;
}


void		NinjaTrap::ninjaShoeBox(const NinjaTrap &ninja)
{
	std::cout << "<NinjaTrap> : " << ninja.getName() << " is impressed by <NinjaTrap> " << _name << std::endl;
}

void		NinjaTrap::ninjaShoeBox(const FragTrap &frag)
{
	std::cout << "<FragTrap> : " << frag.getName() << " is impressed by <NinjaTrap> " << _name << std::endl;
}

void		NinjaTrap::ninjaShoeBox(const ScavTrap &scav)
{
	std::cout << "<ScavTrap> : " << scav.getName() << " is impressed by <NinjaTrap> " << _name << std::endl;
}

void		NinjaTrap::ninjaShoeBox(const ClapTrap &clap)
{
	std::cout << "<ClapTrap> : " << clap.getName() << " is impressed by <NinjaTrap> " << _name << std::endl;
}

