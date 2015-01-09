/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 14:33:05 by gleger            #+#    #+#             */
/*   Updated: 2015/01/09 15:56:48 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Sorcerer.class.hpp>
#include <iostream>

Sorcerer::Sorcerer()
{
	Sorcerer::_nbSorcerer++;
	std::cout << "Sorcerer Default constructor called." << std::endl;
}

Sorcerer::Sorcerer(std::string name, std::string title)			:_name(name), _title(title)
{
	Sorcerer::_nbSorcerer++;
	std::cout << this->getName() << ", "<< this->getTitle() <<", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & ref)
{
	Sorcerer::_nbSorcerer++;
	std::cout << "Sorcerer Copy constructor called." << std::endl;
	*this = ref;
}

Sorcerer::~Sorcerer()
{
	Sorcerer::_nbSorcerer--;
	std::cout << this->getName() << ", "<< this->getTitle() <<", is dead. Consequences will never be the same !" << std::endl;
}

std::ostream &		operator<<(std::ostream & o, Sorcerer const & value)
{
	o << "I am "<< value.getName() << ", "<< value.getTitle() <<", and I like ponies";
	return o;
}

Sorcerer &			Sorcerer::operator=(Sorcerer const & source)
{

	std::cout << "Sorcerer Assignation operator called" << std::endl;
	(void)source;
	return (*this);
}

void				Sorcerer::setName(std::string name)
{
	this->_name = name;
}

std::string 		Sorcerer::getName() const
{
	return this->_name;
}

void				Sorcerer::setTitle(std::string title)
{
	this->_title = title;
}

std::string 		Sorcerer::getTitle() const
{
	return this->_title;
}

void				Sorcerer::polymorph(Victim const & nonocent) const
{
	nonocent.getPolymorphed();
}

void				Sorcerer::intro() const
{
	std::cout << "I am "<< this->getName() << ", "<< this->getTitle() <<", and I like ponies" << std::endl;
}

int			Sorcerer::getNbSorcerer()
{
	return(Sorcerer::_nbSorcerer);
}

int	Sorcerer::_nbSorcerer=0;
