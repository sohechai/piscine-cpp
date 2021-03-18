/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 22:12:13 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/18 22:33:37 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <sstream>
# include <ios>

class		Brain
{
	public:

	Brain();
	Brain(int);
	~Brain();

	std::string		identify() const;
	int				get_neurons();

	private:

	int				_neurons;
};

#endif