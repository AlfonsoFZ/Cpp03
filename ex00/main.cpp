/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfofern <alfofern@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 09:19:15 by alfofern          #+#    #+#             */
/*   Updated: 2024/03/21 22:14:00 by alfofern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main( void )
{
	std::cout << "\033[94m--------------------------------------------------\033[0m" << std::endl;
	std::cout << "\033[94m                    My test                      \033[0m" << std::endl;
    std::cout << "\033[94m--------------------------------------------------\033[0m" << std::endl << std::endl;
	ClapTrap clap("Jose");
	std::cout << "\033[94mJose Inicial \033[0m" << std::endl;
	clap.print_atributes();
	std::cout << "\033[94m-------------------------------------------------1\033[0m" << std::endl;
	ClapTrap clap1("juan");
	ClapTrap clap2(clap1);
	std::cout << "\033[94mclap2 es copia de Juan\033[0m" << std::endl;
	clap2.print_atributes();
	std::cout << "\033[94m-------------------------------------------------2\033[0m" << std::endl;
	std::cout << "\033[94mclap.attack(Juan): \033[0m" << std::endl;
	clap.attack("Juan");
	std::cout << "\033[94mclap.printattr()): \033[0m" << std::endl;
	clap.print_atributes();
	std::cout << "\033[94m-------------------------------------------------3\033[0m" << std::endl;
	std::cout << "\033[94mclap2 before attacks: \033[0m" << std::endl;
	std::cout << "\033[94m-------------------------------------------------4\033[0m" << std::endl;
	clap2.print_atributes();
	std::cout << "\033[94m-------------------------------------------------5\033[0m" << std::endl;
	std::cout << "\033[94mclap2 takesDamage(5): \033[0m" << std::endl;
	clap2.takeDamage(5);
	std::cout << "\033[94mclap2 after attack: \033[0m" << std::endl;
	clap2.print_atributes();
	std::cout << "\033[94m-------------------------------------------------3\033[0m" << std::endl;
	std::cout << "\033[94mclap2 takesDamage(4): \033[0m" << std::endl;
	clap2.takeDamage(4);
	std::cout << "\033[94mclap2 after 2nd attack: \033[0m" << std::endl;
	clap2.print_atributes();
	std::cout << "\033[94m-------------------------------------------------6\033[0m" << std::endl;
	std::cout << "\033[94mclap2.beRepaired(2)\033[0m" << std::endl;
	clap2.beRepaired(2);
	clap2.print_atributes();
	std::cout << "\033[94m-------------------------------------------------7\033[0m" << std::endl;
	clap2.takeDamage(4);
	std::cout << "\033[94mclap2 after 3rd attack: \033[0m" << std::endl;	
	clap2.print_atributes();
	std::cout << "\033[94m-------------------------------------------------8\033[0m" << std::endl;
	std::cout << "\033[94mclap2.beRepaired(2)\033[0m" << std::endl;
	clap2.beRepaired(2);
	clap2.print_atributes();
	std::cout << "\033[94m-------------------------------------------------9\033[0m" << std::endl;
	ClapTrap clap3("clap3 Inicial");
	clap3.print_atributes();
	std::cout << "\033[94m-------------------------------------------------10\033[0m" << std::endl;
	clap3 = clap2;
	std::cout << "\033[94mclap3 = clap2\033[0m" << std::endl;
	clap3.print_atributes();
	std::cout << "\033[94m-----------------------------------------------END\033[0m" << std::endl;
	return 0;
}
