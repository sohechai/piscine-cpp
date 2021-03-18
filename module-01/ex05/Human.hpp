/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 22:12:18 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/18 22:32:49 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP
# include <iostream>
# include "Brain.hpp"

class		Human
{
	public:

	Human();
	~Human();

	std::string		identify() const;
	const Brain&			getBrain() ;

	private:

	const Brain		_brain;

};

#endif