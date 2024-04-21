/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:06:49 by alfofern          #+#    #+#             */
/*   Updated: 2024/03/21 23:12:13 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap("default_FragName")
{
	if (DEBUG)
		std::cout << "Frag default constructor called" << std::endl;
	this->_HitPoints = 100;
	this->_EnergyPoints = 10;
	this->_AttackDamage = 30;
}
FragTrap::FragTrap(const std::string name): ClapTrap(name)
{
	if (DEBUG)
		std::cout << "Frag Constructor with a name called" << std::endl;
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
}

FragTrap::FragTrap( const FragTrap &other ) : ClapTrap(other)
{	
	if (DEBUG)
		std::cout << "Frag copy constructor called" << std::endl;
	this->_Name = other._Name;
	this->_HitPoints	= other._HitPoints;
	this->_EnergyPoints = other._EnergyPoints;
	this->_AttackDamage = other._AttackDamage;
}

FragTrap& FragTrap::operator=( const FragTrap &other )
{
	if (DEBUG)
		std::cout << "Frag assignation operator called" << std::endl;
	if (this != &other)
	{
		this->_Name = other._Name;
		this->_HitPoints	= other._HitPoints;
		this->_EnergyPoints = other._EnergyPoints;
		this->_AttackDamage = other._AttackDamage;
	}
	return *this;
}

FragTrap::~FragTrap( void )
{
	if (DEBUG)
		std::cout << "Frag destructor called" << std::endl;
}

void FragTrap::highFivesGuys( void )
{
	if (DEBUG)
		std::cout << "highFiveGuys called" << std::endl;
	std::cout 	<< "FragTrap " 
				<< _Name 
				<< " says Hi guys high these Five!" 
				<< std::endl;
}
