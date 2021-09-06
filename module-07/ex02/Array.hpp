/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 15:57:55 by sohechai          #+#    #+#             */
/*   Updated: 2021/09/06 16:39:36 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template <typename T>

class Array
{
public:

	Array() : _array(NULL), _size(0) { }
	Array(const unsigned int n) : _array(new T[n]), _size(n) { }
	Array(const Array &src) : _array(NULL), _size(0) { *this = src; }
	~Array()
	{
		if (this->_size != 0)
			delete[] this->_array;
	}

	Array& 				operator=(Array const &rhs)
	{
		if (this != &rhs)
		{
			if (this->_size != rhs._size)
			{
				delete[] this->_array;
				this->_size = rhs._size;
				this->_array = new T[this->_size];
			}
			for (unsigned int i = 0; i < this->_size; i++)
				this->_array[i] = rhs._array[i];
		}
		return (*this);
	}

	T					&operator[](unsigned int index) // used to access array elements
	{
		if (index >= this->_size)
			throw IndexOutOfTheLimitsException();
		return (this->_array[index]);
	}

	unsigned int		size() const { return(this->_size); }

	class 						IndexOutOfTheLimitsException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Array index is out of the limits");
			}
	};

private:
	T					*_array;
	unsigned int		_size;
};

#endif