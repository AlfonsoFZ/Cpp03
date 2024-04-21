/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 09:19:15 by alfofern          #+#    #+#             */
/*   Updated: 2024/03/25 20:26:59 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

int main( void )
{
	std::cout << "\033[94m--------------------------------------------------\033[0m" << std::endl;
	std::cout << "\033[94m                    My test                       \033[0m" << std::endl;
    std::cout << "\033[94m--------------------------------------------------\033[0m" << std::endl << std::endl;
	std::cout << "\033[94mDiamond1 instance\033[0m" << std::endl;
	DiamondTrap Diamond1;
	Diamond1.print_atributes();
	std::cout << "\033[94m-------------------------------------------------0\033[0m" << std::endl;
	std::cout << "\033[94mDiamond2 with name: ZombiePaco\033[0m" << std::endl;
	DiamondTrap Diamond2("ZombiePaco");
	Diamond2.print_atributes();
	Diamond2.whoAmI();
	Diamond2.attack("ZombiePepe");
	std::cout << "\033[94m-------------------------------------------------1\033[0m" << std::endl;
	std::cout << "\033[94mDiamond4 instance\033[0m" << std::endl;
	DiamondTrap Diamond4;
	std::cout << "\033[94mDiamond4 = Diamond2\033[0m" << std::endl;
	Diamond4 = Diamond2;
	Diamond4.whoAmI();
	std::cout << "\033[94m-------------------------------------------------2\033[0m" << std::endl;
	std::cout << "\033[94mDiamond20 ia a copy of Diamond1\033[0m" << std::endl;
	DiamondTrap Diamond20(Diamond1);
	Diamond20.print_atributes();
	Diamond20.whoAmI();
	std::cout << "\033[94m-------------------------------------------------3\033[0m" << std::endl;
	std::cout << "\033[94mDiamond2.takedamage()\033[0m" << std::endl;
	Diamond2.takeDamage(20);
	std::cout << "\033[94m--------------------------------------------------5\033[0m" << std::endl;
	std::cout << "\033[94mDiamond2.berepaired()\033[0m" << std::endl;
	Diamond2.beRepaired(15);
	Diamond2.print_atributes();
	std::cout << "\033[94m--------------------------------------------------6\033[0m" << std::endl;
	std::cout << "\033[94mDiamond2.takedamage() to death\033[0m" << std::endl;
	Diamond2.takeDamage(20);
	Diamond2.takeDamage(20);
	Diamond2.takeDamage(20);
	Diamond2.takeDamage(25);
	Diamond2.takeDamage(20);
	Diamond2.takeDamage(20);
	std::cout << "\033[94m--------------------------------------------------7\033[0m" << std::endl;
	std::cout << "\033[94mDiamond2.berepaired()\033[0m" << std::endl;
	Diamond2.beRepaired(15);
	Diamond2.print_atributes();
	std::cout << "\033[94m-----------------------------------------------END\033[0m" << std::endl;
	if (DEBUG)
		std::cout << "\033[94mDestruction begins\033[0m" << std::endl;
	return 0;
}
