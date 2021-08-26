/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 14:38:42 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/26 19:51:15 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include <iostream>
# include <unistd.h>
# include "Animal.hpp"
# include "Brain.hpp"
class		Cat : public Animal
{
	public:

	Cat();
	Cat(const Cat &src);
	~Cat(void);

	Cat& 				operator=(Cat const &rhs);

    virtual void        makeSound() const;

	private:

	const 				Brain* _brain;

};

#endif