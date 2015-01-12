/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Missile.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 18:52:58 by gleger            #+#    #+#             */
/*   Updated: 2015/01/12 00:50:29 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Missile.class.hpp>

Missile::Missile()
{
	Missile::_nbMissile++;
	//std::cout << "Missile Default constructor called." << std::endl;
}

Missile::Missile(Missile const & ref)				:Object()
{
	Missile::_nbMissile++;
	//std::cout << "Missile Copy constructor called." << std::endl;
	*this = ref;
}

Missile::Missile(int posX, int posY)				:Object(posX, posY)
{
	Missile::_nbMissile++;
	//std::cout << "Missile Coord constructor called." << std::endl;
}

Missile::~Missile()
{
	Missile::_nbMissile--;
	std::cout << "Missile Destructor called." << std::endl;
}

Missile &			Missile::operator=(Missile const & source)
{

	std::cout << "Missile Assignation operator called" << std::endl;
	(void)source;
	//do some stuff
	return (*this);
}

int			Missile::getNbMissile()
{
	return(Missile::_nbMissile);
}

int	Missile::_nbMissile=0;
