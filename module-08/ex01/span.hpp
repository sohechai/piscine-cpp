/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 18:27:16 by sohechai          #+#    #+#             */
/*   Updated: 2021/09/14 15:37:39 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <list>
# include <vector>
# include <algorithm>

class span
{
public:
	span();
	span(unsigned int N);
	span(const span &src);
	~span();

	span& 						operator=(span const &rhs);

	void						addNumber(int n);
	void						addNumberrange(int range);
	int							shortestSpan();
	int							longestSpan();

	class 						ObjectFullException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Object is full");
			}
	};

	class 						NoSpanToFindException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("There is no span to find");
			}
	};

private:
	unsigned int				_size;
	unsigned int				_place;
	std::vector<int>			_tab;
};


#endif