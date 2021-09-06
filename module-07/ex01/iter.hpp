/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 15:40:41 by sohechai          #+#    #+#             */
/*   Updated: 2021/09/06 16:12:32 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template <typename A, typename B, typename C>

void		iter(A *ptr, B length, void (*function)(C const &))
{
	for (B idx = 0; idx < length; idx ++)
	{
		function(*ptr);
		ptr++;
	}
	return ;
}

template <typename T>

void	display(T const &n)
{
	std::cout << n << "|" << std::endl;

	return ;
}

#endif