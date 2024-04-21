/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:06:58 by alfofern          #+#    #+#             */
/*   Updated: 2024/03/26 21:17:14 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_H
#define DIAMOND_H
#include <iostream>
#include <string>
#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

/**
 * @brief rule of three: if you have to define one of them 
 *  you have to define all of them.
 * 	copy constructor, assignment operator and destructor
 *  we use public ScavTrap, public FragTrap to inherit from both classes
 *  it is important to use the same order in the constructors.
 *  public means that the methods of the parent class acan be inherited 
 *  by a child class 
 */
class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string _Name;
	
	public:
	
		DiamondTrap( void );
		DiamondTrap( const std::string name );
		DiamondTrap( const DiamondTrap &other );
		DiamondTrap&	operator=( const DiamondTrap &other );
		~DiamondTrap( void );
		using ScavTrap::attack;
		void whoAmI( void );
};

// with "usign" we can use the ScavTrap attack method as it was a method of DiamondTrap

#endif
