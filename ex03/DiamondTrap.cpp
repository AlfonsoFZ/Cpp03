/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:06:49 by alfofern          #+#    #+#             */
/*   Updated: 2024/03/21 23:12:13 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap("default_clap_name"), \
	ScavTrap("default_clap_name"), FragTrap("default_clap_name")
{
	if (DEBUG)
		std::cout << "Diamond default constructor called" << std::endl;
	this->_Name = "default_name";
 	this->_HitPoints = FragTrap::_HitPoints;
	this->_EnergyPoints = ScavTrap::_EnergyPoints;
	this->_AttackDamage = FragTrap::_AttackDamage;
}

DiamondTrap::DiamondTrap(const std::string name): ClapTrap( name ), ScavTrap( name ), FragTrap( name )
{
	if (DEBUG)
		std::cout << "Diamond Constructor with a name called" << std::endl;
	this->_Name = name;
	ClapTrap::_Name = name + "_clap_name";
	this->_HitPoints = FragTrap::_HitPoints;
	this->_EnergyPoints = ClapTrap::_EnergyPoints;
	this->_AttackDamage = FragTrap::_AttackDamage;
}
DiamondTrap::DiamondTrap( const DiamondTrap &other ) : ClapTrap( other._Name ), ScavTrap( other._Name ), FragTrap( other._Name )
{	
	if (DEBUG)
		std::cout << "Diamond copy constructor called" << std::endl;
	this->_Name = other._Name;
	ClapTrap::_Name = other._Name + "_clap_name";
	this->_HitPoints	= other._HitPoints;
	this->_EnergyPoints = other._EnergyPoints;
	this->_AttackDamage = other._AttackDamage;
}

DiamondTrap& DiamondTrap::operator=( const DiamondTrap &other )
{
	if (DEBUG)
		std::cout << "Diamond assignation operator called" << std::endl;
	if (this != &other)
	{
		this->_Name = other._Name;
		ClapTrap::_Name = other._Name + "_clap_name";
		this->_HitPoints	= other._HitPoints;
		this->_EnergyPoints = other._EnergyPoints;
		this->_AttackDamage = other._AttackDamage;
	}
	return *this;
}

DiamondTrap::~DiamondTrap( void )
{
	if (DEBUG)
		std::cout << "Diamond destructor called" << std::endl;
}

void DiamondTrap::whoAmI( void )
{
	if (DEBUG)
		std::cout << "Who am I is called" << std::endl;
	std::cout 	<< "DiamondTrap " 
				<< this->_Name 
				<< ", also known as ClapTrap "
				<< ClapTrap::_Name
				<< std::endl;
}
