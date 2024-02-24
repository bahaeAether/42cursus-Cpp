/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baboulou <baboulou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 21:37:14 by baboulou          #+#    #+#             */
/*   Updated: 2024/02/18 21:45:08 by baboulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP

# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	private:
		std::string	ideas[100];
	public:
		Brain(void);
		Brain(const std::string &idea);
		Brain(const Brain &cpy);
		~Brain(void);
		Brain		&operator=(const Brain &cpy);
		
		void		setIdeas(const std::string &idea);
		std::string	getIdeas(int index) const;
};

#endif
