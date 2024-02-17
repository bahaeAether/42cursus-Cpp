/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SED.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baboulou <baboulou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 22:59:33 by baboulou          #+#    #+#             */
/*   Updated: 2024/02/15 15:36:44 by baboulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SED.hpp"

void	ft_replace(size_t pos, size_t len, std::string replace, std::string &line)
{
	line.erase(pos, len);
	line.insert(pos, replace);
}

int	main(int ac, char **av)
{
	std::string		filename;
	std::string		find;
	std::string		replace;
	std::string		line;
	std::string		&lineRef = line;

	if (ac != 4)
	{
		std::cout << "Usage: ./SED [filename] [find] [replace]" << std::endl;
		return (1);
	}
	filename = av[1];
	find = av[2];
	replace = av[3];

	if (find.empty() || filename.empty())
	{
		std::cout << "Error: cannot have empty fields on [filename] or [find]" << std::endl;
		return (1);
	}
	
	std::ifstream	inputFile;
	std::ofstream	newFile;

	filename = av[1];
	find = av[2];
	replace = av[3];
	inputFile.open(filename.c_str());
	if (!inputFile.is_open())
	{
		std::cout << "Error: file not found" << std::endl;
		return (1);
	}
	newFile.open((filename + ".replace").c_str());
	if (!newFile.is_open())
	{
		std::cout << "Error: cannot create new file" << std::endl;
		return (1);
	}
	while (std::getline(inputFile, line))
	{
		size_t	pos = 0;
		while (line.find(find, pos) != std::string::npos)
		{
			ft_replace(line.find(find, pos), find.length(), replace, lineRef);
			pos = line.find(find, pos) + replace.length();
			if (pos > line.length())
				break;
		}
		newFile << line << std::endl;
	}
	inputFile.close();
	newFile.close();
	return (0);
}
