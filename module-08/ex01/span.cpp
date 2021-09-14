/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 18:27:18 by sohechai          #+#    #+#             */
/*   Updated: 2021/09/14 17:39:06 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

span::span() : _size(0)
{
	return ;
}

span::span(unsigned int N) : _size(N), _place(N)
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

void				span::addNumber(int n)
{
	if (this->_place == 0)
			throw	ObjectFullException();

	_tab.push_back(n);
	this->_place--;

	return ;
}

void				span::addNumberrange(int range)
{
	if (this->_place == 0)
			throw	ObjectFullException();

	for (int i = 0; i < range; i++)
		_tab.push_back(i);
	this->_place--;

	return ;
}

int					span::shortestSpan()
{
	int shortest = 1;

	if (this->_size <= 1)
		throw	NoSpanToFindException();
	else
	{
		std::vector<int>::iterator	it = this->_tab.begin();
		shortest = *it;
		for (it = this->_tab.begin() + 1; it != this->_tab.end(); ++it)
		{
			if ((*it - *(it -1)) > 0 && (*it - *(it - 1)) < shortest)
				shortest = (*it - *(it - 1));
			else if ((*it - *(it -1)) < 0 && (*(it - 1) - *it) < shortest)
				shortest = (*(it - 1) - *it);
		}
	}
	return (shortest);
}

int					span::longestSpan()
{
	if (this->_size <= 1)
		throw	NoSpanToFindException();
	return (*std::max_element(_tab.begin(), _tab.end()) - *std::min_element(_tab.begin(), _tab.end()));
}
