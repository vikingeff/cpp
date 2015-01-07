/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 13:42:40 by gleger            #+#    #+#             */
/*   Updated: 2015/01/06 19:44:10 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Brain.hpp>

Brain::Brain()
{
	//std::cout<<"A Brain appeared!!"<<std::endl;
	Brain::_nbBrains+=1;
	std::cout<<"Nb B="<<_nbBrains<<std::endl;
	return;
}

Brain::~Brain()
{
	//std::cout<<"There is a dead Brain now mouwahahaha!!"<<std::endl;
	Brain::_nbBrains-=1;
	std::cout<<"Nb B="<<_nbBrains<<std::endl;
	return;
}

int				Brain::getBrainIQ(void) const
{
	return this->_BrainIQ;
}

void			Brain::setBrainIQ(int level)
{
	this->_BrainIQ = level;
}

void			Brain::identify()
{
	
}

int				Brain::getNbBrains(void)
{
	return Brain::_nbBrains;
}

int				Brain::_nbBrains = 0;

