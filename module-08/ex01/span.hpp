/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 18:27:16 by sohechai          #+#    #+#             */
/*   Updated: 2021/09/06 18:37:19 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>

class span
{
public:
	span();
	span(unsigned int N);
	span(const span &src);
	~span();

	span& 				operator=(span const &rhs);

	void				addNumber(int n);
	int					shortestSpan();
	int					longestSpan();

private:
	unsigned int		_size;
};


#endif