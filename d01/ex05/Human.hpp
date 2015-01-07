/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 13:43:44 by gleger            #+#    #+#             */
/*   Updated: 2015/01/07 08:46:37 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include <iostream>
#include <string>
#include <Brain.hpp>

class Human
{
public:	
	Human();
	~Human();

	void			setZombieType(std::string type);
	void			randomNames(int nbChumps);
	static int		getNbHuman(void);

private:
	static int		_nbHuman;
	std::string		_zombieType;	
};

#endif

