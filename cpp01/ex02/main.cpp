/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baboulou <baboulou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 17:43:31 by baboulou          #+#    #+#             */
/*   Updated: 2024/02/14 18:13:36 by baboulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// main for "HI THIS IS BRAIN" project

int main(void)
{
	std::string stringVar = "HI THIS IS BRAIN";
	std::string *stringPTR = &stringVar;
	std::string &stringREF = stringVar;

	std::cout << "Address of stringVar:      " << &stringVar << std::endl;
	std::cout << "Address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "Address held by stringREF: " << &stringREF << std::endl;
	std::cout << "---------------------------------" << std::endl;
	std::cout << "Value of stringVar:            " << stringVar << std::endl;
	std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;

	return (0);
}
