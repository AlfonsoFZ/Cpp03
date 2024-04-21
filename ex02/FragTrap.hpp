/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:06:58 by alfofern          #+#    #+#             */
/*   Updated: 2024/03/21 22:56:53 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H
#include <iostream>
#include <string>
#include "ClapTrap.hpp"

/**
 * @brief rule of three: if you have to define one of them 
 *  you have to define all of them.
 * 	copy constructor, assignment operator and destructor
 */
class FragTrap : public ClapTrap
{

	public:
	
		FragTrap( void );
		FragTrap( const std::string name );
		FragTrap( const FragTrap &other );
		FragTrap&	operator=( const FragTrap &other );
		~FragTrap( void );
		void highFivesGuys( void );
};


#endif
