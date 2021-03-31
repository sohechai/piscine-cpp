/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 10:18:00 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/31 10:55:23 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP
# include <iostream>
# include <unistd.h>

class		Sorcerer
{
	public:

	Sorcerer();
	Sorcerer(std::string name, std::string type);
	~Sorcerer();

	Sorcerer&     operator=(Sorcerer const &rhs);

	private:

	std::string			_Name;
	std::string			_Type;

};

#endif