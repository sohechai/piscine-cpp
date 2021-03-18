/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 23:52:18 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/19 00:00:01 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void	ft_replace(std::string file, std::string s1, std::string s2)
{
	
}

int		main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Please enter a file name, and 2 strings" << std::endl;
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