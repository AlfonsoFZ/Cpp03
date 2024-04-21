/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:06:58 by alfofern          #+#    #+#             */
/*   Updated: 2024/03/21 22:54:43 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H
#include <iostream>
#include <string>

/**
 * @brief rule of three: if you have to define one of them 
 *  you have to define all of them.
 * 	copy constructor, assignment operator and destructor
 */
class ClapTrap
{
	private: 
		std::string _Name;
		unsigned int _HitPoints;
		unsigned int _EnergyPoints;
		unsigned int _AttackDamage;

	public:
		ClapTrap( void );
		ClapTrap( const std::string name );
		void print_atributes( void );
		ClapTrap( const ClapTrap &other );
		ClapTrap& operator=( const ClapTrap &other );
		~ClapTrap( void );

		void attack( const std::string& target );
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );
};


#endif
