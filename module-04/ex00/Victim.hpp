/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 16:00:55 by sohechai          #+#    #+#             */
/*   Updated: 2021/04/08 17:30:46 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <iostream>
# include <unistd.h>

class		Victim
{
	public:

	Victim();
	Victim(std::string name);
	~Victim();

	Victim&			operator=(Victim const &rhs);


	virtual void			getPolymorphed() const;
	std::string		getName(void) const;

	private:


	std::string			_Name;

};

std::ostream&	operator << (std::ostream &o, Victim const &i);

#endif