/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Object.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 10:12:21 by gleger            #+#    #+#             */
/*   Updated: 2015/01/11 10:15:38 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Object.class.hpp>

Object::Object()
{
	Object::_nbObject++;
	std::cout << "Object Default constructor called." << std::endl;
}

Object::Object(Object const & ref)
{
	Object::_nbObject++;
	std::cout << "Object Copy constructor called." << std::endl;
	*this = ref;
}

Object::~Object()
{
	Object::_nbObject--;
	std::cout << "Object Destructor called." << std::endl;
}

Object &			Object::operator=(Object const & source)
{

	std::cout << "Object Assignation operator called" << std::endl;
	(void)source;
	return (*this);
}

int			Object::getNbObject()
{
	return(Object::_nbObject);
}

int	Object::_nbObject=0;
