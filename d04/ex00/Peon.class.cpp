/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 14:31:09 by gleger            #+#    #+#             */
/*   Updated: 2015/01/09 16:48:17 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Peon.class.hpp>

Peon::Peon()							:Victim()
{
	Peon::_nbPeon++;
	std::cout << "Peon Default constructor called." << std::endl;
}

Peon::Peon(std::string name)			:Victim(name)
{
	Peon::_nbPeon++;
	std::cout << "Zog Zog." << std::endl;
}

Peon::Peon(Peon const & ref)			:Victim(ref)
{
	Peon::_nbPeon++;
	std::cout << "Peon Copy constructor called." << std::endl;
	*this = ref;
}

Peon::~Peon()
{
	Peon::_nbPeon--;
	std::cout << "Bleuark..." << std::endl;
}

Peon &			Peon::operator=(Peon const & source)
{

	std::cout << "Peon Assignation operator called" << std::endl;
	//do some stuff
	(void)source;
	return (*this);
}

void				Peon::getPolymorphed() const
{
	std::cout <<this->getName()<<" has been turned into a pink pony !" << std::endl;
}

int			Peon::getNbPeon()
{
	return(Peon::_nbPeon);
}

int	Peon::_nbPeon=0;
