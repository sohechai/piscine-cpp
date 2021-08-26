/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 17:00:34 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/26 19:40:36 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <unistd.h>

class		Brain
{
	public:

	Brain();
	Brain(const Brain &src);
	~Brain(void);

	Brain& 			operator=(Brain const &rhs);

    protected:

    std::string     ideas[100];

};

#endif