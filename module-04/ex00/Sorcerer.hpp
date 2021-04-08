/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 10:18:00 by sohechai          #+#    #+#             */
/*   Updated: 2021/04/08 17:02:00 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP
# include "Victim.hpp"
# include <iostream>
# include <unistd.h>

class		Sorcerer
{
	public:

	Sorcerer(std::string name, std::string title);
	~Sorcerer();

	Sorcerer&		operator=(Sorcerer const &rhs);

	void			polymorph(Victim const &target) const;
	std::string		getName(void) const;
	std::string		getTitle(void) const;

	private:

	Sorcerer();

	std::string			_Name;
	std::string			_Title;

};

std::ostream&			operator << (std::ostream &o, Sorcerer const &i);

#endif