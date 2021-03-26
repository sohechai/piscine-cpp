/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 15:24:09 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/26 21:27:01 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class		Fixed
{
	public:

	Fixed(void);
	Fixed(Fixed const &src);
	~Fixed(void);

	Fixed &      		operator=(Fixed const &rhs);
	int 				getRawBits(void) const;
	void 				setRawBits(int const raw);

	private:

	int					_val;
	static const int	_raw = 8;

};

#endif
