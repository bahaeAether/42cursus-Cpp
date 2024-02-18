/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baboulou <baboulou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 23:51:53 by baboulou          #+#    #+#             */
/*   Updated: 2024/02/18 00:22:42 by baboulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int		main(void)
{
	ClapTrap	ClapTrap1("1337");
	ClapTrap	ClapTrap2("UM6P");
	ScavTrap	scavTrap("42");

	ClapTrap1.attack(ClapTrap2);
	ClapTrap2.beRepaired(1);
	ClapTrap2.takeDamage(10);
	ClapTrap2.attack(ClapTrap1);
	ClapTrap1.beRepaired(1);
	ClapTrap2.takeDamage(10);
	ClapTrap2.attack(ClapTrap1);
	ClapTrap1.attack(ClapTrap1);
	ClapTrap1.attack("Ghost");

	scavTrap.attack(ClapTrap1);
	scavTrap.attack(scavTrap);
	scavTrap.beRepaired(10);
	scavTrap.guardGate();

	return (0);
}
