/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 16:47:29 by sohechai          #+#    #+#             */
/*   Updated: 2021/09/06 18:22:39 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <list>
# include <algorithm>
# include <stdexcept>

template <typename T>

int		easyfind(T containerofInt, int n)
{
	typename T::const_iterator		it;
	it = std::find(containerofInt.begin(), containerofInt.end(), n);

	if (it == containerofInt.end())
		throw std::out_of_range("value can't be found, it's out of range");

	return (*it);
}

#endif