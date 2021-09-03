/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 16:00:07 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/31 18:39:35 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"
#include <iostream>
#include <stdio.h>

int			main(int argc, char **argv)
{
	if (argc != 2)
		std::cout << "Error, 1 argument is required" << std::endl;
	else
	{
		Convert			convert(argv[1], argv[1][0]);

		convert.toChar();
		convert.toInt();
		convert.toFloat();
		convert.toDouble();
	}
	(void)argv;
}