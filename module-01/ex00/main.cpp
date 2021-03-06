/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 12:45:38 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/16 16:54:44 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int			main(void)
{
	Pony	pony1 = ponyOnTheStack("stackPoney", "pink", "50");
	Pony*	pony2 = ponyOnTheHeap("heapPoney", "grey", "20");

	delete pony2;

	return 0;
}
