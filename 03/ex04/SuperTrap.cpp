/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 13:32:11 by user42            #+#    #+#             */
/*   Updated: 2021/01/19 01:22:11 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
{
	_name = "Default";
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	std::cout << "SuperTrap Default Constructor called" << std::endl;
}

SuperTrap::SuperTrap(std::string name): FragTrap(name), NinjaTrap(name)
{
	_name = name;
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	std::cout << "SuperTrap Default Constructor called" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &other) : ClapTrap(other)
{
	std::cout << "SuperTrap Assignation Constructor called" << std::endl;
}

SuperTrap	&SuperTrap::operator=(SuperTrap const &other)
{
	(void)other;
	std::cout << _name << ": Hi ! I'm ready !" << std::endl;
	return (*this);
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "SuperTrap Default Destructor called" << std::endl;
}

void	SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}

void	SuperTrap::printStats(void)
{
	std::cout << "name " << _name << std::endl;
	std::cout << "hitPoints " << _hitPoints << std::endl;
	std::cout << "maxHitPoints " << _maxHitPoints << std::endl;
	std::cout << "energyPoints " << _energyPoints << std::endl;
	std::cout << "maxEnergyPoints " << _maxEnergyPoints << std::endl;
	std::cout << "meleeAttackDamage " << _meleeAttackDamage << std::endl;
	std::cout << "rangedAttackDamage " << _rangedAttackDamage << std::endl;
	std::cout << "armorDamageReduction " << _armorDamageReduction << std::endl;
}