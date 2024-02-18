/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baboulou <baboulou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 00:23:52 by baboulou          #+#    #+#             */
/*   Updated: 2024/02/18 09:09:21 by baboulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int		main(void)
{
	ClapTrap	ClapTrap1("1337");
	ClapTrap	ClapTrap2("UM6P");
	FragTrap	FragTrap1("42");
	FragTrap	FragTrap2(FragTrap1);

	std::cout << FragTrap2.getName() << std::endl;

	ClapTrap1.attack(ClapTrap2);
	ClapTrap2.beRepaired(1);
	ClapTrap2.takeDamage(10);
	ClapTrap2.attack(ClapTrap1);
	ClapTrap1.beRepaired(1);
	ClapTrap2.takeDamage(10);
	ClapTrap2.attack(ClapTrap1);
	ClapTrap1.attack(ClapTrap1);
	ClapTrap1.attack("Ghost");

	FragTrap1.attack(ClapTrap1);
	FragTrap1.attack(FragTrap1);
	FragTrap1.beRepaired(10);
	FragTrap1.highFivesGuys();

	return (0);
}
