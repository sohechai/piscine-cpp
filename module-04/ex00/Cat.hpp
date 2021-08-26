/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 14:38:42 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/26 19:33:44 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include <iostream>
# include <unistd.h>
# include "Animal.hpp"

class		Cat : public Animal
{
	public:

	Cat();
	Cat(const Cat &src);
	~Cat(void);

	Cat& 			operator=(Cat const &rhs);

    void        	makeSound() const;

};

#endif