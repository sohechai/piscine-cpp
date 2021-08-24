/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 17:19:42 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/23 16:30:50 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include <unistd.h>
# include "AMateria.hpp"

class Character : public ICharacter
{
    public:

	Character(std::string name);
    ~Character();

	Character& 				operator=(Character const &rhs);
    std::string const & 	getName() const;
    void 					equip(AMateria* m);
    void 					unequip(int idx);
    void 					use(int idx, ICharacter& target);

	private:

	AMateria				*_inventory[4];
	std::string				_name;
};

#endif