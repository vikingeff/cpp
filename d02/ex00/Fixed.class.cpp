/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 10:54:07 by gleger            #+#    #+#             */
/*   Updated: 2015/01/07 13:11:49 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <Fixed.class.hpp>

Fixed::Fixed()						:_rawBits (0), _fracBits(8)
{
	std::cout<<"Default constructor called"<<std::endl;
	Fixed::_nbFixed+=1;
	return;
}

Fixed::Fixed(Fixed const & ref)		:_fracBits(8)
{
	std::cout<<"Copy constructor called"<<std::endl;
	*this=ref;
	Fixed::_nbFixed+=1;
	return;
}

Fixed::~Fixed()
{
	std::cout<<"Destroyed"<<std::endl;
	Fixed::_nbFixed-=1;
	return;
}

Fixed &			Fixed::operator=(Fixed const & source)
{
	std::cout<<"Assignation operator called"<<std::endl;
	if (this != &source)
		this->_rawBits= source.getRawBits();

	return *this;
}

int				Fixed::getRawBits(void) const
{
	std::cout<<"getRawBits member function called"<<std::endl;
	return this->_rawBits;
}

void			Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;
}

void			Fixed::toString()
{
	std::cout<<"My fixed value is "<<this->_rawBits<<std::endl;
}

int				Fixed::getNbFixed(void)
{
	return Fixed::_nbFixed;
}

int				Fixed::_nbFixed = 0;
