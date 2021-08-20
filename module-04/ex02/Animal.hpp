/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 14:34:27 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/20 17:10:18 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <unistd.h>

class		AAnimal
{
	public:

	Animal();
	virtual ~Animal(void);

    virtual void        makeSound() const = 0;
    std::string 		getType(void) const;

	protected:

	std::string type;

};

#endif