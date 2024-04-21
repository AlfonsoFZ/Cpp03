/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 09:19:15 by alfofern          #+#    #+#             */
/*   Updated: 2024/03/21 23:04:01 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{
	std::cout << "\033[94m--------------------------------------------------\033[0m" << std::endl;
	std::cout << "\033[94m                    My test                       \033[0m" << std::endl;
    std::cout << "\033[94m--------------------------------------------------\033[0m" << std::endl << std::endl;
	FragTrap Frag1;
	Frag1.print_atributes();
	std::cout << "\033[94m-------------------------------------------------0\033[0m" << std::endl;
	FragTrap Frag2("ZombiePaco");
	std::cout << "\033[94mFrag2 con nombre ZombiePaco\033[0m" << std::endl;
	Frag2.print_atributes();
	std::cout << "\033[94m-------------------------------------------------1\033[0m" << std::endl;
	Frag2.highFivesGuys();
	std::cout << "\033[94m-------------------------------------------------2\033[0m" << std::endl;
	std::cout << "\033[94mFrag1 takesDamage(5): \033[0m" << std::endl;
	Frag1.takeDamage(5);
	Frag1.print_atributes();
	std::cout << "\033[94m-------------------------------------------------3\033[0m" << std::endl;
	FragTrap Frag20(Frag1);
	std::cout << "\033[94mFrag20 es copia de Frag1\033[0m" << std::endl;
	Frag20.print_atributes();
	std::cout << "\033[94m-------------------------------------------------4\033[0m" << std::endl;
	std::cout << "\033[94mFrag3 = Frag2\033[0m" << std::endl;
	FragTrap Frag3;
	Frag3 = Frag2;
	Frag3.print_atributes();
	std::cout << "\033[94m--------------------------------------------------5\033[0m" << std::endl;
	std::cout << "\033[94mFrag3.attack()\033[0m" << std::endl;
	Frag3.attack("ZombiePaco");
	std::cout << "\033[94m--------------------------------------------------6\033[0m" << std::endl;
	Frag2.print_atributes();
	std::cout << "\033[94m--------------------------------------------------7\033[0m" << std::endl;
	std::cout << "\033[94mFrag3.takedamage()\033[0m" << std::endl;
	Frag2.takeDamage(20);
	Frag2.takeDamage(20);
	Frag2.takeDamage(20);
	Frag2.takeDamage(20);
	Frag2.takeDamage(25);
	Frag2.takeDamage(20);
	Frag2.takeDamage(20);
	std::cout << "\033[94m--------------------------------------------------8\033[0m" << std::endl;
	std::cout << "\033[94mFrag3.berepaired()\033[0m" << std::endl;
	Frag2.beRepaired(15);
	Frag2.print_atributes();
	std::cout << "\033[94m--------------------------------------------------9\033[0m" << std::endl;
	std::cout << "\033[94mFrag3.berepaired()\033[0m" << std::endl;
	Frag2.beRepaired(15);
	Frag2.print_atributes();
	std::cout << "\033[94m-----------------------------------------------END\033[0m" << std::endl;
	return 0;
}
