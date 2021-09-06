/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 18:27:18 by sohechai          #+#    #+#             */
/*   Updated: 2021/09/06 18:37:18 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

span::span() : _size(0)
{
	return ;
}

span::span(unsigned int N) : _size(N)
{
	return ;
}

span::span(const span &src)
{
	*this = src;
}

span::~span()
{
	return ;
}

span& 				span::operator=(span const &rhs)
{
	if (this != &rhs)
	{
		_size = rhs._size;
	}
	return (*this);
}

void					span::addNumber(int n)
{

	return ;
}

int					span::shortestSpan()
{
	return ();
}

int					span::longestSpan()
{
	return ();
}