/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 15:24:09 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/26 21:53:18 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class		Fixed
{
	public:

	Fixed(void);
	Fixed(const int);
	Fixed(const float);
	Fixed(Fixed const & src);
	~Fixed(void);

	Fixed&	      		operator=(Fixed const & rhs);
	float 				toFloat(void) const;
	int					toInt(void) const;
	int 				getRawBits(void) const;
	void 				setRawBits(int const raw);

	private:

	int					_val;
	static const int	_raw = 8;

};

std::ostream&			operator << (std::ostream &o, Fixed const &i);

#endif
