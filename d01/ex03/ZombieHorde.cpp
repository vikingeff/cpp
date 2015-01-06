/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 13:43:06 by gleger            #+#    #+#             */
/*   Updated: 2015/01/06 18:31:19 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <Zombie.hpp>
#include <ZombieHorde.hpp>

ZombieHorde::ZombieHorde(int nbChumps)		:_zombieType("Bonecrushers")
{
	//std::cout<<"Let's rock some zombies baby !!"<<std::endl;
	ZombieHorde::_nbHorde+=1;
	std::cout<<"Nb H="<<_nbHorde<<std::endl;
	_zombietab = new Zombie[nbChumps];
	randomNames(nbChumps);
	return;
}

ZombieHorde::~ZombieHorde()
{
	//std::cout<<"Finally done !!"<<std::endl;
	ZombieHorde::_nbHorde-=1;
	delete []_zombietab;
	std::cout<<"Nb H="<<_nbHorde<<std::endl;
	return;
}

void			ZombieHorde::setZombieType(std::string type)
{
	this->_zombieType = type;
}

void			ZombieHorde::randomNames(int size)
{
	std::string name_list[] = {"Ron", "Pearline", "Ayako", "Catalina", "Ulysses", "Mauro", "Brittanie", "Ty", "Carmen", "Rayford", "Mathilde", "Eliana", "Marybelle", "Mozella",  
"Dwight", "Robby", "Arden", "Ludivina", "Donald", "Halina"};
	int			list_size = 20;
	int			RandIndex = rand() % list_size;
	//Zombie*		body;

	for (int i=0; i<size; i++)
	{
		this->_zombietab[i].setZombiename(name_list[RandIndex]);
		this->_zombietab[i].setZombietype(this->_zombieType);
		RandIndex = rand() % list_size;
		this->_zombietab[i].announce();
	}
}

int				ZombieHorde::getNbHorde(void)
{
	return ZombieHorde::_nbHorde;
}

int				ZombieHorde::_nbHorde = 0;
