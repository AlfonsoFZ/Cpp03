/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:06:58 by alfofern          #+#    #+#             */
/*   Updated: 2024/04/03 20:44:40 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H
#include <iostream>
#include <string>
#include "ClapTrap.hpp"

/**
 * @brief rule of three: if you have to define one of them 
 *  you have to define all of them.
 * 	copy constructor, assignment operator and destructor
 */
class ScavTrap : public ClapTrap
{

	public:
	
		ScavTrap( void );
		ScavTrap( const std::string name );
		ScavTrap( const ScavTrap &other );
		ScavTrap&	operator=( const ScavTrap &other );
		~ScavTrap( void );
		void attack(const std::string& target);
		void guardGate( void );
};


#endif
