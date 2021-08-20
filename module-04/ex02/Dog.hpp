/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 14:38:47 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/20 16:22:34 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>
# include <unistd.h>

class		Dog : public Animal
{
	public:

	Dog();
	~Dog(void);

    virtual void        makeSound() const;

	private:

	const Brain* _brain;

};

#endif