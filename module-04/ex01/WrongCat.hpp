/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:17:11 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/26 19:41:22 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include <iostream>
# include <unistd.h>
# include "WrongAnimal.hpp"

class		WrongCat : public WrongAnimal
{
	public:

	WrongCat();
	WrongCat(const WrongCat &src);
	~WrongCat(void);

	WrongCat& 			operator=(WrongCat const &rhs);

    void        		makeSound() const;

};

#endif