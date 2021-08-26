/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:17:02 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/26 19:59:50 by sohechai         ###   ########lyon.fr   */
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
	WrongAnimal(const WrongAnimal &src);
	~WrongAnimal(void);

	WrongAnimal& 			operator=(WrongAnimal const &rhs);

    void        makeSound() const;
    std::string         getType(void) const;

	protected:

	std::string type;

};

#endif