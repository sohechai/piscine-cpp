/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:17:11 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/18 16:20:59 by sohechai         ###   ########lyon.fr   */
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
	~WrongCat(void);

    void        makeSound() const;

};

#endif