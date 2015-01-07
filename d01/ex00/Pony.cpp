/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 10:54:07 by gleger            #+#    #+#             */
/*   Updated: 2015/01/06 13:53:11 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Pony.hpp>

Pony::Pony(std::string where)
{
	this->_horn_size=0;
	this->_pony_color=where;
	this->_catch_phrase="";
	std::cout<<"Awesome a pony appeared on the "<<where<<"."<<std::endl;
	Pony::_nbPonies+=1;
	return;
}

Pony::~Pony()
{
	std::cout<<"Amagad, a pony disappeared \\o/"<<std::endl;
	Pony::_nbPonies-=1;
	return;
}

int				Pony::getHorn_size(void) const
{
	return this->_horn_size;
}

void			Pony::setHorn_size(int size)
{
	this->_horn_size = size;
}

std::string		Pony::getPony_color(void) const
{
	return this->_pony_color;
}

void			Pony::setPony_color(std::string str)
{
	this->_pony_color = str;
}
std::string		Pony::getCatch_phrase(void) const
{
	return this->_catch_phrase;
}

void			Pony::setCatch_phrase(std::string str)
{
	this->_catch_phrase = str;
}


void			Pony::ponyOnTheHeap()
{
	this->_pony_color="blue";
	this->_catch_phrase="dabadi dabada !!";
	this->printPony();
}

void			Pony::ponyOnTheStack()
{
	this->_pony_color="red & green";
	this->_catch_phrase="wanna ride me ?";
	this->printPony();
}

void			Pony::printPony()
{
	std::cout<<"Hello there i'm a "<<this->_pony_color<<" pony "<<this->_catch_phrase<<std::endl;
}

int				Pony::getNbPonies(void)
{
	return Pony::_nbPonies;
}

int				Pony::_nbPonies = 0;
