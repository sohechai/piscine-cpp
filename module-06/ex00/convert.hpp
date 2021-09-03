/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 16:09:46 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/31 18:39:56 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP
# include <iostream>
# include <iomanip>
# include <unistd.h>
# include <string>

class	Convert
{
	public:

	Convert();
	Convert(std::string value, char c);
	Convert(const Convert &src);
	~Convert();

	Convert& 				operator=(Convert const &rhs);

	void					toChar();
	void					toInt();
	void					toFloat();
	void					toDouble();


	class 						NonDisplayableException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Non displayable");
			}
	};

	class 						ImpossibleException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("impossible");
			}
	};

	private:

	std::string				_value;
	char					_c;
};

#endif