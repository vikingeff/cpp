/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 14:31:52 by gleger            #+#    #+#             */
/*   Updated: 2015/01/09 16:17:49 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Victim.class.hpp>

Victim::Victim()
{
	Victim::_nbVictim++;
	std::cout << "Victim Default constructor called." << std::endl;
}

Victim::Victim(std::string name)			:_name(name)
{
	Victim::_nbVictim++;
	std::cout << "Some random victim called "<<this->getName()<<" just popped !" << std::endl;
}

Victim::Victim(Victim const & ref)
{
	Victim::_nbVictim++;
	std::cout << "Victim Copy constructor called." << std::endl;
	*this = ref;
}

Victim::~Victim()
{
	Victim::_nbVictim--;
	std::cout << "Victim "<<this->getName()<<" just died for no apparent reason !" << std::endl;
}

Victim &			Victim::operator=(Victim const & source)
{

	std::cout << "Victim Assignation operator called" << std::endl;
	//do some stuff
	(void)source;
	return (*this);
}

void				Victim::setName(std::string name)
{
	this->_name = name;
}

std::string 		Victim::getName() const
{
	return this->_name;
}

void				Victim::getPolymorphed() const
{
	std::cout <<this->getName()<<" has been turned into a cute little sheep !" << std::endl;
}

void				Victim::intro() const
{
	std::cout << "I am "<< this->getName() << ", and I like otters" << std::endl;
}

int			Victim::getNbVictim()
{
	return(Victim::_nbVictim);
}

int	Victim::_nbVictim=0;
