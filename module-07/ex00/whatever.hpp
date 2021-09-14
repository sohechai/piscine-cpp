/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 14:39:46 by sohechai          #+#    #+#             */
/*   Updated: 2021/09/10 14:14:31 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE07_HPP
# define MODULE07_HPP
# include <iostream>

template <typename T>

void		swap(T &a, T &b)
{
	std::cout << "swap .." << std::endl;
	T tmp = a;
	a = b;
	b = tmp;

	return ;
}

template <typename T>

T			min(const T x, const T y)
{
	return (x <= y ? x : y);
}

template <typename T>

T			max(const T x, const T y)
{
	return (x >= y ? x : y);
}

#endif
