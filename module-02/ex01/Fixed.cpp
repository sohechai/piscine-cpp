/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 15:24:07 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/26 23:39:30 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed(void) : _val(0)
{
	std::cout << "Default constructor called" << std::endl;

	return ;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;

	this->_val = n * std::pow(2, _raw);

	return ;
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called" << std::endl;

	this->_val = roundf(n * std::pow(2, _raw));

	return ;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;

	*this = src;

	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;

	return ;
}

float 				Fixed::toFloat(void) const
{
	return (this->_val / std::pow(2, _raw));
}

int					Fixed::toInt(void) const
{
	return (this->_val / std::pow(2, _raw));
}

int 				Fixed::getRawBits(void) const
{
	return (this->_val);
}

void 				Fixed::setRawBits(int const raw)
{
	this->_val = raw;
}

Fixed&			Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_val = rhs.getRawBits();

	return (*this);
}

std::ostream&			operator << (std::ostream &o, Fixed const &i)
{
	o << i.toFloat();

	return (o);
}

int main(void) {
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	return 0;
}
