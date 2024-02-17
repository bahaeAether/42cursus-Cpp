/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baboulou <baboulou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 07:05:19 by baboulou          #+#    #+#             */
/*   Updated: 2024/02/17 08:13:23 by baboulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int		main(void)
{
	ClapTrap	ClapTrap1("1337");
	ClapTrap	ClapTrap2("UM6P");

	ClapTrap1.attack(ClapTrap2);
	ClapTrap2.beRepaired(1);
	ClapTrap2.takeDamage(10);
	ClapTrap2.attack(ClapTrap1);
	ClapTrap1.beRepaired(1);
	ClapTrap2.takeDamage(10);
	ClapTrap2.attack(ClapTrap1);
	ClapTrap1.attack(ClapTrap1);
	ClapTrap1.attack("Ghost");

	return (0);
}
