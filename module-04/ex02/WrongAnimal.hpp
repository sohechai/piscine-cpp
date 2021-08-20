/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:17:02 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/18 16:20:58 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>
# include <unistd.h>

class		WrongAnimal
{
	public:

	WrongAnimal();
	~WrongAnimal(void);

    void        makeSound() const;
    std::string         getType(void) const;

	protected:

	std::string type;

};

#endif