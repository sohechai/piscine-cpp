/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 18:27:05 by sohechai          #+#    #+#             */
/*   Updated: 2021/09/14 15:37:50 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int 		main(void)
{
	span		three_sp = span(3);

	try
	{
		three_sp.addNumber(5);
		three_sp.addNumber(3);
		three_sp.addNumber(17);

		std::cout << "shortest for 2 = " << three_sp.shortestSpan() << std::endl;
		std::cout << "longest for 2 = " << three_sp.longestSpan() << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "---------------------" << std::endl;

	span		big_sp = span(10000);

	try
	{
		big_sp.addNumberrange(1000);

		std::cout << "shortest for 10000 = " << big_sp.shortestSpan() << std::endl;
		std::cout << "longest for 10000 = " << big_sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "---------------------" << std::endl;

	span		one_sp = span(1);

	try
	{
		one_sp.addNumber(1);

		std::cout << "shortest for 1 = " << one_sp.shortestSpan() << std::endl;
		std::cout << "longest for 1 = " << one_sp.longestSpan() << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "---------------------" << std::endl;

	span		full_sp = span(2);

	try
	{
		for (int i = 1; i <= 3; i++)
		{
			full_sp.addNumber(i);
		}

		std::cout << "shortest for full = " << full_sp.shortestSpan() << std::endl;
		std::cout << "longest for full = " << full_sp.longestSpan() << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}