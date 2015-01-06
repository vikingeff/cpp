/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 13:44:22 by gleger            #+#    #+#             */
/*   Updated: 2015/01/06 17:07:46 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <Zombie.hpp>
#include <ZombieEvent.hpp>

int		main(void)
{
	Zombie			test;
	Zombie*			tevent;
	ZombieEvent		event;
	Zombie*			random[15];

	test.setZombietype("undead");
	test.announce();
	event.setZombieType("lurker");
	tevent=event.newZombie("Eyesucker");
	tevent->announce();
	for (int i=0; i<15; i++)
	{
		random[i]= event.randomChump();
	}
	for (int i=0; i<15; i++)
	{
		delete (random[i]);
	}
	delete tevent;
	return 0;
}