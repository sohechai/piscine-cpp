/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 14:34:27 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/26 19:29:00 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <unistd.h>

class		Animal
{
	public:

	Animal();
	Animal(const Animal &src);
	virtual ~Animal(void);

	Animal& 			operator=(Animal const &rhs);

    virtual void        makeSound() const;
    std::string 		getType(void) const;

	protected:

	std::string type;

};

#endif