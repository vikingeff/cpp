/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 13:42:40 by gleger            #+#    #+#             */
/*   Updated: 2015/01/06 18:30:27 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Zombie.hpp>

Zombie::Zombie() : _zombiename("Brainsmasher")
{
	//std::cout<<"A zombie appeared!!"<<std::endl;
	Zombie::_nbZombies+=1;
	std::cout<<"Nb Z="<<_nbZombies<<std::endl;
	this->announce();
	return;
}

Zombie::~Zombie()
{
	//std::cout<<"There is a dead zombie now mouwahahaha!!"<<std::endl;
	Zombie::_nbZombies-=1;
	std::cout<<"Nb Z="<<_nbZombies<<std::endl;
	return;
}

std::string		Zombie::getZombietype(void) const
{
	return this->_zombietype;
}

void			Zombie::setZombietype(std::string type)
{
	this->_zombietype = type;
}

std::string		Zombie::getZombiename(void) const
{
	return this->_zombiename;
}

void			Zombie::setZombiename(std::string name)
{
	this->_zombiename = name;
}

std::string		Zombie::getZombieclasse(void) const
{
	return this->_zombieclasse;
}

void			Zombie::setZombieclasse(std::string classe)
{
	this->_zombieclasse = classe;
}

void			Zombie::announce()
{
	std::cout<<"<"<<this->getZombiename()<<" ("<<this->getZombietype()<<")> Hiza gona eat yo braiinzzz !!!"<<std::endl;	
}

int				Zombie::getNbZombies(void)
{
	return Zombie::_nbZombies;
}

int				Zombie::_nbZombies = 0;

