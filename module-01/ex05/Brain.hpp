/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 22:12:13 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/17 22:29:48 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class		Brain
{
	public:

	Brain();
	~Brain();

	std::string		identify();


	private:

	std::string		_Cortex;
	std::string		_Thalamus;
	std::string		_Hypothalamus;
	std::string		_Amygdale;


};

#endif