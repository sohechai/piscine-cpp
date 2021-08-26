/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:44:31 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/26 20:06:03 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include <unistd.h>
# include "ICharacter.hpp"

class	AMateria
{
	public:

	AMateria();
	AMateria(std::string const & type);
	AMateria(const AMateria &src);
	virtual ~AMateria();

	AMateria& 				operator=(AMateria const &rhs);

	std::string const & 	getType() const; //Returns the materia type
	virtual AMateria* 		clone() const = 0;
	virtual void 			use(ICharacter& target);

	protected:

	std::string 			_type;
};

#endif