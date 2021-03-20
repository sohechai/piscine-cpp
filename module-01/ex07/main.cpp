/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 23:52:18 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/20 22:41:17 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int			ft_strlen(std::string str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void			ft_replace(std::string file, std::string s1, std::string s2)
{
	size_t			found;
	size_t			pos = 0;
	size_t			s1len = ft_strlen(s1);
	size_t			s2len = ft_strlen(s2);
	std::string		str;
	std::ifstream	ifs(file);
	if (ifs.fail())
	{
		std::cout << "\033[91m[Error] Could't open your file.\033[0m" << std::endl;
		return ;
	}
	std::getline(ifs, str, '\0');
	ifs.close();
	while (str.find(s1, pos) != std::string::npos)
	{
		found = str.find(s1, pos);
		str.replace(found, s1len, s2);
		pos = (size_t)found + s2len;
	}
	std::ofstream	ofs("FILENAME.replace");
	ofs << str;
	ofs.close();
	return ;
}

int		main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "\033[91m[Error] Enter a file name, and 2 strings.\033[0m" << std::endl;
	}
	else
	{
		std::string file = argv[1];
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		ft_replace(file, s1, s2);
	}
	return (0);
}