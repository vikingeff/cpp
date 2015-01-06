/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 13:43:06 by gleger            #+#    #+#             */
/*   Updated: 2015/01/06 16:47:24 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <Zombie.hpp>
#include <ZombieEvent.hpp>

ZombieEvent::ZombieEvent()		:_zombieType("undead")
{
	//std::cout<<"Let's rock some zombies baby !!"<<std::endl;
	ZombieEvent::_nbEvent+=1;
	std::cout<<"Nb E="<<_nbEvent<<std::endl;
	return;
}

ZombieEvent::~ZombieEvent()
{
	//std::cout<<"Finally done !!"<<std::endl;
	ZombieEvent::_nbEvent-=1;
	std::cout<<"Nb E="<<_nbEvent<<std::endl;
	return;
}

void			ZombieEvent::setZombieType(std::string type)
{
	this->_zombieType = type;
}

Zombie*			ZombieEvent::newZombie(std::string name)
{
	Zombie*		dead;
	dead = new Zombie();
	dead->setZombiename(name);
	dead->setZombietype(this->_zombieType);
	return dead;
}

Zombie*			ZombieEvent::randomChump(void)
{
	std::string name_list[] = {"Ron", "Pearline", "Ayako", "Catalina", "Ulysses", "Mauro", "Brittanie", "Ty", "Carmen", "Rayford", "Mathilde", "Eliana", "Marybelle", "Mozella",  
"Dwight", "Robby", "Arden", "Ludivina", "Donald", "Halina"};
	int			list_size = 20;
	int			RandIndex = rand() % list_size;
	Zombie*		body;

	body = new Zombie();
	body->setZombiename(name_list[RandIndex]);
	body->setZombietype(this->_zombieType);
	body->announce();
	return body;
}

int				ZombieEvent::getNbEvent(void)
{
	return ZombieEvent::_nbEvent;
}

int				ZombieEvent::_nbEvent = 0;
