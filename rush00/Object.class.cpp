/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Object.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 10:12:21 by gleger            #+#    #+#             */
/*   Updated: 2015/01/11 20:19:16 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Object.class.hpp>

Object::Object()
{
	Object::_nbObject++;
	//std::cout << "Object Default constructor called." << std::endl;
}

Object::Object(Object const & ref)
{
	Object::_nbObject++;
	//std::cout << "Object Copy constructor called." << std::endl;
	*this = ref;
}

Object::Object(int posX, int posY)				:_posX(posX), _posY(posY)
{
	Object::_nbObject++;
	//std::cout << "Object Coord constructor called." << std::endl;
}

Object::~Object()
{
	Object::_nbObject--;
	//std::cout << "Object Destructor called." << std::endl;
}

Object &			Object::operator=(Object const & source)
{

	std::cout << "Object Assignation operator called" << std::endl;
	(void)source;
	return (*this);
}

int			Object::getPosX()
{
	return this->_posX;
}

void		Object::setPosX(int value)
{
	this->_posX=value;
}

int			Object::getPosY()
{
	return this->_posY;
}

void		Object::setPosY(int value)
{
	this->_posY=value;
}
int			Object::getOldPosX()
{
	return this->_oldposX;
}

void		Object::setOldPosX(int value)
{
	this->_oldposX=value;
}

int			Object::getOldPosY()
{
	return this->_oldposY;
}

void		Object::setOldPosY(int value)
{
	this->_posY=value;
}

int					Object::getNbObject()
{
	return(Object::_nbObject);
}

int	Object::_nbObject=0;
