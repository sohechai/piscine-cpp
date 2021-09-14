/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 16:47:29 by sohechai          #+#    #+#             */
/*   Updated: 2021/09/14 14:23:46 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <list>
# include <algorithm>
# include <stdexcept>

template <typename T>

int		easyfind(T container, int n)
{
	typename T::const_iterator		it;

	it = std::find(container.begin(), container.end(), n);

	if (it == container.end())
		throw std::out_of_range("value can't be found");

	return (*it);
}

#endif