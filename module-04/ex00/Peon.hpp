/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 16:56:04 by sohechai          #+#    #+#             */
/*   Updated: 2021/04/08 17:31:57 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP
# include "Victim.hpp"
# include <iostream>
# include <unistd.h>

class		Peon : public Victim
{
	public:

	Peon(std::string name);
	~Peon();

	Peon&		operator=(Peon const &rhs);

	void		getPolymorphed() const;
	// std::string	getName(void) const;

	private:

	//Peon();

	std::string			_Name;

};

// std::ostream&			operator << (std::ostream &o, Peon const &i);

#endif