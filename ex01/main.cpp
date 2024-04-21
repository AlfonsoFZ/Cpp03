/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 09:19:15 by alfofern          #+#    #+#             */
/*   Updated: 2024/03/21 22:56:30 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
	std::cout << "\033[94m--------------------------------------------------\033[0m" << std::endl;
	std::cout << "\033[94m                    My test                       \033[0m" << std::endl;
    std::cout << "\033[94m--------------------------------------------------\033[0m" << std::endl << std::endl;
	ScavTrap scav1;
	scav1.print_atributes();
	std::cout << "\033[94m-------------------------------------------------0\033[0m" << std::endl;
	ScavTrap scav2("ZombiePaco");
	std::cout << "\033[94mscav2 con nombre ZombiePaco\033[0m" << std::endl;
	scav2.print_atributes();
	std::cout << "\033[94m-------------------------------------------------1\033[0m" << std::endl;
	scav2.guardGate();
	std::cout << "\033[94m-------------------------------------------------2\033[0m" << std::endl;
	std::cout << "\033[94mscav1 takesDamage(5): \033[0m" << std::endl;
	scav1.takeDamage(5);
	scav1.print_atributes();
	std::cout << "\033[94m-------------------------------------------------3\033[0m" << std::endl;
	ScavTrap scav20(scav1);
	std::cout << "\033[94mscav20 es copia de scav1\033[0m" << std::endl;
	scav20.print_atributes();
	std::cout << "\033[94m-------------------------------------------------4\033[0m" << std::endl;
	std::cout << "\033[94mscav3 = scav2\033[0m" << std::endl;
	ScavTrap scav3;
	scav3 = scav2;
	scav3.print_atributes();
	std::cout << "\033[94m--------------------------------------------------5\033[0m" << std::endl;
	std::cout << "\033[94mscav3.attack()\033[0m" << std::endl;
	scav3.attack("ZombiePaco");
	std::cout << "\033[94m--------------------------------------------------6\033[0m" << std::endl;
	scav2.print_atributes();
	std::cout << "\033[94m--------------------------------------------------7\033[0m" << std::endl;
	std::cout << "\033[94mscav3.takedamage()\033[0m" << std::endl;
	scav2.takeDamage(20);
	scav2.takeDamage(20);
	scav2.takeDamage(20);
	scav2.takeDamage(20);
	scav2.takeDamage(25);
	scav2.takeDamage(20);
	scav2.takeDamage(20);
	std::cout << "\033[94m--------------------------------------------------8\033[0m" << std::endl;
	std::cout << "\033[94mscav3.berepaired()\033[0m" << std::endl;
	scav2.beRepaired(15);
	scav2.print_atributes();
	std::cout << "\033[94m--------------------------------------------------9\033[0m" << std::endl;
	std::cout << "\033[94mscav3.berepaired()\033[0m" << std::endl;
	scav2.beRepaired(15);
	scav2.print_atributes();
	std::cout << "\033[94m-----------------------------------------------END\033[0m" << std::endl;
	return 0;
}
