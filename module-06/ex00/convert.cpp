/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 16:09:49 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/31 18:40:57 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

Convert::Convert()
{
	return ;
}

Convert::Convert(std::string value, char c) : _value (value), _c(c)
{
	return ;
}

Convert::Convert(const Convert &src)
{
	*this = src;

	return ;
}

Convert::~Convert()
{
	return ;
}

Convert& 				Convert::operator=(Convert const &rhs)
{
	if(this != &rhs)
	{
		_value = rhs._value;
	}

	return (*this);
}

void					Convert::toChar()
{
	char c;

	std::cout << "char: ";

	try
	{
		c = (char(std::stoi(this->_value)));
	}
	catch(const std::exception& e)
	{
		std::cout << _c << std::endl;

		return ;
	}
	if (c >= 33 && c <= 127)
		std::cout << "'" << (char(std::stoi(this->_value))) << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;

	return ;
}

void					Convert::toInt()
{
	std::cout << "int: ";
	try
	{
		std::cout << (int)(std::stoi(this->_value)) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "impossible" << std::endl;
	}

	return ;
}

void					Convert::toFloat()
{
	float f;

	std::cout << "float: ";

	try
	{
		f = std::strtod(this->_value.c_str(), NULL);
	}
	catch(const std::exception& e)
	{
		std::cout << "impossible" << std::endl;

		return ;
	}
	std::cout << std::fixed << std::setprecision(1) << f << "f" << std::endl;

	return ;
}

void					Convert::toDouble()
{
	double		d;

	std::cout << "double: ";

	try
	{
		d = std::stod(this->_value);
	}
	catch(const std::exception& e)
	{
		std::cout << "impossible" << std::endl;

		return ;
	}
	std::cout << std::fixed << std::setprecision(1) << d << std::endl;

	return ;
}
