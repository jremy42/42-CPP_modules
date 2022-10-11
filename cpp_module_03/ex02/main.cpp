/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:38:10 by jremy             #+#    #+#             */
/*   Updated: 2022/05/13 14:32:34 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void) {
	
	std::cout << "-----CLAPTRAP TEST----------" << std::endl;
	{	
	ClapTrap test("CL4PTP");
	std::cout << std::endl;
	test.attack("Cervocosmik");
	std::cout << std::endl;
	test.takeDamage(6);
	std::cout << std::endl;
	test.beRepaired(4);
	std::cout << std::endl;
	test.takeDamage(3);
	std::cout << std::endl;
	test.beRepaired(8);
	std::cout << std::endl;
	test.attack("Cervocosmik1");
	std::cout << std::endl;
	test.attack("Cervocosmik2");
	std::cout << std::endl;
	test.attack("Cervocosmik3");
	std::cout << std::endl;
	test.attack("Cervocosmik4");
	std::cout << std::endl;
	test.attack("Cervocosmik5");
	std::cout << std::endl;
	test.attack("Cervocosmik6");
	std::cout << std::endl;
	test.attack("Cervocosmik7");
	std::cout << std::endl;
	test.attack("Cervocosmik8");
	std::cout << std::endl;
	test.takeDamage(17);
	std::cout << std::endl;
	test.beRepaired(8);
	std::cout << std::endl;

	ClapTrap test2;
	
	test2 = test;
	test2.takeDamage(3);
	}

		std::cout << "-----ScavTrap TEST----------" << std::endl;
	{	
	ScavTrap test("SC4VTR4P");
	std::cout << std::endl;
	test.attack("Cervocosmik");
	std::cout << std::endl;
	test.takeDamage(6);
	std::cout << std::endl;
	test.beRepaired(4);
	std::cout << std::endl;
	test.takeDamage(3);
	std::cout << std::endl;
	test.beRepaired(8);
	std::cout << std::endl;
	test.attack("Cervocosmik1");
	std::cout << std::endl;
	test.attack("Cervocosmik2");
	std::cout << std::endl;
	test.attack("Cervocosmik3");
	std::cout << std::endl;
	test.attack("Cervocosmik4");
	std::cout << std::endl;
	test.attack("Cervocosmik5");
	std::cout << std::endl;
	test.attack("Cervocosmik6");
	std::cout << std::endl;
	test.attack("Cervocosmik7");
	std::cout << std::endl;
	test.attack("Cervocosmik8");
	std::cout << std::endl;
	test.takeDamage(17);
	std::cout << std::endl;
	test.beRepaired(8);
	std::cout << std::endl;
	test.guardGate();
	std::cout << std::endl;

	

	ScavTrap test2;
	
	test2 = test;
	test2.takeDamage(3);
	test2.guardGate();
	test2.takeDamage(1000);
	}

		std::cout << "-----FragTrap TEST----------" << std::endl;
	{	
	FragTrap test("FR4G-TR4P");
	std::cout << "hitpoints: [" << test.getHitPoints() << "]" << std::endl;
	std::cout << "energypoints: [" << test.getEnergyPoints() << "]" << std::endl;
	std::cout << "damage: [" << test.getAttackDamage() << "]" << std::endl;

	std::cout << std::endl;
	test.attack("Cervocosmik");
	std::cout << std::endl;
	test.takeDamage(6);
	std::cout << std::endl;
	test.beRepaired(4);
	std::cout << std::endl;
	test.takeDamage(3);
	std::cout << std::endl;
	test.beRepaired(8);
	std::cout << std::endl;
	test.attack("Cervocosmik1");
	std::cout << std::endl;
	test.attack("Cervocosmik2");
	std::cout << std::endl;
	test.attack("Cervocosmik3");
	std::cout << std::endl;
	test.attack("Cervocosmik4");
	std::cout << std::endl;
	test.attack("Cervocosmik5");
	std::cout << std::endl;
	test.attack("Cervocosmik6");
	std::cout << std::endl;
	test.attack("Cervocosmik7");
	std::cout << std::endl;
	test.attack("Cervocosmik8");
	std::cout << std::endl;
	test.takeDamage(17);
	std::cout << std::endl;
	test.beRepaired(8);
	std::cout << std::endl;
	test.highFivesGuys();
	std::cout << std::endl;

	

	FragTrap test2;
	
	test2 = test;
	test2.takeDamage(3);
	test2.takeDamage(1000);
	}
	return 0;

}