/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 15:40:55 by sohechai          #+#    #+#             */
/*   Updated: 2021/09/06 16:14:02 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int				main(void)
{
	int			tab[5] = {1, 2, 3, 4, 5};

	::iter("test", 4, display<char>);

	std::cout << "--" << std::endl;

	::iter(tab, 5, display<int>);

	return (0);
}