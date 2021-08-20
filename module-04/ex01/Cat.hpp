/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 14:38:42 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/19 15:51:16 by sohechai         ###   ########lyon.fr   */
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
	~Cat(void);

    virtual void        makeSound() const;

	private:

	const Brain* _brain;

};

#endif