/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 13:32:11 by user42            #+#    #+#             */
/*   Updated: 2021/01/19 00:20:09 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_level = 1;
	_name = "Default";
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	std::cout << "ClapTrap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_level = 1;
	_name = name;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	std::cout << "ClapTrap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &other)
{
	std::cout << "ClapTrap Assignation called" << std::endl;
	*this = other;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &other)
{
	_hitPoints = other._hitPoints;
	_maxHitPoints = other._maxHitPoints;
	_energyPoints = other._energyPoints;
	_maxEnergyPoints = other._maxEnergyPoints;
	_name = other._name;
	_meleeAttackDamage = other._meleeAttackDamage;
	_rangedAttackDamage = other._rangedAttackDamage;
	_armorDamageReduction = other._armorDamageReduction;
	_level = other._level;
	std::cout << "ClapTrap operator= called" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}


void	ClapTrap::takeDamage(unsigned int amount)
{
	int am = amount;
	am = ((am - _armorDamageReduction) > 0) ? am - _armorDamageReduction : 0;
	std::cout << "ClapTrap <" << _name << "> takes " << am << " damage !!!" << std::endl;
	_hitPoints = ((_hitPoints - am) > 0) ? _hitPoints - am : 0;
	std::cout << "ClapTrap <" << _name << "> hit points : " << _hitPoints << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap <" << _name << "> is repaired !" << std::endl;
	_hitPoints = (_hitPoints + amount <= 100) ? (_hitPoints + amount) : 100;
	std::cout << "ClapTrap <" << _name << "> hit points : " << _hitPoints << std::endl;
}

void	ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "ClapTrap <" << _name << "> uses his psychic abilities on " << target << "d oing"  << _rangedAttackDamage << " damage (ranged attack)" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "ClapTrap <" << _name << "> uses his fierce fists on " << target  << " doing " << _meleeAttackDamage << " damage (melee attack)" << std::endl;
}