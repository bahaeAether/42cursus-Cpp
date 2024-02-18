/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baboulou <baboulou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 17:33:31 by baboulou          #+#    #+#             */
/*   Updated: 2024/02/18 17:57:55 by baboulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP

# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	protected:
		std::string	type;
	public:
		Animal(void);
		Animal(const Animal &cpy);
		~Animal(void);
		Animal		&operator=(const Animal &cpy);

		std::string	getType(void) const;
		void		makeSound(void) const;
};

#endif
