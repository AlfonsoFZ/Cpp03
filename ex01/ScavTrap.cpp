/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:06:49 by alfofern          #+#    #+#             */
/*   Updated: 2024/04/03 20:44:08 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap("default_ScavName")
{
	if (DEBUG)
		std::cout << "Scav default constructor called" << std::endl;
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
}
ScavTrap::ScavTrap(const std::string name): ClapTrap(name)
{
	if (DEBUG)
		std::cout << "Scav Constructor with a name called" << std::endl;
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
}

ScavTrap::ScavTrap( const ScavTrap &other ) : ClapTrap(other)
{	
	if (DEBUG)
		std::cout << "Copy constructor called" << std::endl;
	this->_Name = other._Name;
	this->_HitPoints	= other._HitPoints;
	this->_EnergyPoints = other._EnergyPoints;
	this->_AttackDamage = other._AttackDamage;
}

ScavTrap& ScavTrap::operator=( const ScavTrap &other )
{
	if (DEBUG)
		std::cout << "Scav assignation operator called" << std::endl;
	if (this != &other)
	{
		this->_Name = other._Name;
		this->_HitPoints	= other._HitPoints;
		this->_EnergyPoints = other._EnergyPoints;
		this->_AttackDamage = other._AttackDamage;
	}
	return *this;
}

ScavTrap::~ScavTrap( void )
{
	if (DEBUG)
		std::cout << "Scav destructor called" << std::endl;
}
void ScavTrap::attack( const std::string& target )
{
	if (DEBUG)
		std::cout << "attack called" << std::endl;
	if (_EnergyPoints > 0 && _HitPoints > 0)
	{
		std::cout 	<< "ScavTrap " 
					<< _Name 
					<< " attacks " 
					<< target 
					<< " causing " 
					<< _AttackDamage 
					<< " points of damage!" << std::endl;
		_EnergyPoints -= 1;
	}
	else
		std::cout << _Name << " cannot attack" << std::endl;
	}

void ScavTrap::guardGate( void )
{
	if (DEBUG)
		std::cout << "guardGate called" << std::endl;
	std::cout 	<< "ScavTrap " 
				<< _Name 
				<< " is now in Gate keeper mode" 
				<< std::endl;
}
