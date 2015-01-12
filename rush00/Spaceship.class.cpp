/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Spaceship.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 10:20:45 by gleger            #+#    #+#             */
/*   Updated: 2015/01/11 19:41:12 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Spaceship.class.hpp>

Spaceship::Spaceship()
{
	Spaceship::_nbSpaceship++;
	//std::cout << "Spaceship Default constructor called." << std::endl;
}

Spaceship::Spaceship(Spaceship const & ref)			:Object()
{
	Spaceship::_nbSpaceship++;
	std::cout << "Spaceship Copy constructor called." << std::endl;
	*this = ref;
}

Spaceship::~Spaceship()
{
	Spaceship::_nbSpaceship--;
	//std::cout << "Spaceship Destructor called." << std::endl;
}

Spaceship &			Spaceship::operator=(Spaceship const & source)
{

	std::cout << "Spaceship Assignation operator called" << std::endl;
	//do some stuff
	(void)source;
	return (*this);
}

int			Spaceship::getNbSpaceship()
{
	return(Spaceship::_nbSpaceship);
}

int	Spaceship::_nbSpaceship=0;
