/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 14:43:44 by gleger            #+#    #+#             */
/*   Updated: 2015/01/09 16:51:21 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Sorcerer.class.hpp>
#include <Peon.class.hpp>
#include <Victim.class.hpp>

int		main()
{
	Sorcerer 		*magic;
	Victim			*puny;
	Peon			*zog;
	//Sorcerer robert("Robert", "the Magnificent");

	magic = new Sorcerer("Gerard", "Majax");
	puny = new Victim("Harry");
	zog = new Peon("Yaj");
	std::cout<<*magic<<std::endl;
	puny->intro();
	magic->polymorph(*puny);
	magic->polymorph(*zog);
	
	delete puny;
	delete magic;
	return 0;
}