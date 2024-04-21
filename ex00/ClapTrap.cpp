/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:06:49 by alfofern          #+#    #+#             */
/*   Updated: 2024/03/21 22:54:12 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/** Default Costrcutor:
 */
ClapTrap::ClapTrap( void )
{
	if (DEBUG)
		std::cout << "Default constructor called" << std::endl;
}
ClapTrap::ClapTrap(const std::string name): _Name(name), _HitPoints(10), \
	_EnergyPoints(10) , _AttackDamage(0)
{
	if (DEBUG)
		std::cout << "Constructor called" << std::endl;
}

void ClapTrap::print_atributes( void )
{
	std::cout << "Name: " << _Name << std::endl;
	std::cout << "HitPoints: " << _HitPoints << std::endl;
	std::cout << "EnergyPoints: " << _EnergyPoints << std::endl;
	std::cout << "AttackDamage: " << _AttackDamage << std::endl;
}

/* Modificando el argumento haciendo que const no afecte a 
toda la clase si se puede asignar el valor de other a *this
como hacíamos en la clase anterior.
en este caso hay que ir con la versión inferior para no arriesgarse
a no cumplir la declaración canoníca de clases
ClapTrap::ClapTrap( ClapTrap const &other )
{	
	if (DEBUG)
		std::cout << "Copy constructor called" << std::endl;
	*this = other;
}*/

ClapTrap::ClapTrap( const ClapTrap &other )
{	
	if (DEBUG)
		std::cout << "Copy constructor called" << std::endl;
	this->_Name = other._Name;
	this->_HitPoints	= other._HitPoints;
	this->_EnergyPoints = other._EnergyPoints;
	this->_AttackDamage = other._AttackDamage;
}

ClapTrap& ClapTrap::operator=( const ClapTrap &other )
{
	if (DEBUG)
		std::cout << "Assignation operator called" << std::endl;
	if (this != &other)
	{
		this->_Name = other._Name;
		this->_HitPoints	= other._HitPoints;
		this->_EnergyPoints = other._EnergyPoints;
		this->_AttackDamage = other._AttackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap( void )
{
	if (DEBUG)
		std::cout << "Destructor called" << std::endl;
}
void ClapTrap::attack(const std::string& target)
{
	if (DEBUG)
		std::cout << "attack called" << std::endl;
	if (_EnergyPoints > 0 && _HitPoints > 0)
	{
		std::cout 	<< "ClapTrap " 
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

void ClapTrap::takeDamage(unsigned int amount)
{
	if (DEBUG)
		std::cout << "takeDamage called" << std::endl;
	if (_HitPoints	> 0 && _EnergyPoints > 0 )
	{
		if (_HitPoints > amount)
			_HitPoints -= amount;
		else
			_HitPoints = 0;
		std::cout 	<< "ClapTrap " << _Name << " has received " 
			<< amount << " points of damage!" << std::endl;
		if (_HitPoints == 0)
			std::cout 	<< "ClapTrap " << _Name << " is dead!" << std::endl;
		}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_EnergyPoints > 0  && _HitPoints > 0)
	{	
		if (DEBUG)
			std::cout << "beRepaired called" << std::endl;
		_HitPoints += amount;
		std::cout 	<< "ClapTrap " 
			<< _Name 
			<< " gets " 
			<< amount
			<< " hit points back"
			<< std::endl;
		_EnergyPoints -= 1;
	}
	else
		std::cout << _Name << " cannot be repaired" << std::endl;
}
