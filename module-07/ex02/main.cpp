/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 16:08:15 by sohechai          #+#    #+#             */
/*   Updated: 2021/09/06 16:31:54 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int		main(void)
{
	Array<int>		nullarray;
	Array<int>		intarray(5);
	Array<char>		chararray(5);
	Array<char>		cpychararray;

	for(size_t i = 0; i < intarray.size(); i++)
		intarray[i] = 5;
	for(size_t i = 0; i < intarray.size(); i++)
		std::cout << intarray[i] << std::endl;

	std::cout << "--" << std::endl;

	for(size_t i = 0; i < chararray.size(); i++)
		chararray[i] = 's';
	for(size_t i = 0; i < chararray.size(); i++)
		std::cout << chararray[i] << std::endl;

	std::cout << "--" << std::endl;

	cpychararray = chararray;

	for(size_t i = 0; i < cpychararray.size(); i++)
		std::cout << cpychararray[i] << std::endl;

	std::cout << "--" << std::endl;

	try
	{
		std::cout << intarray[10];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}