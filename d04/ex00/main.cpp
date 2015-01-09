/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 14:43:44 by gleger            #+#    #+#             */
/*   Updated: 2015/01/10 00:50:40 by gleger           ###   ########.fr       */
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

	magic = new Sorcerer("David Schiffer", "Le magicien des temps modernes");
	puny = new Victim("Harry");
	zog = new Peon("Yaj");

	std::cout<<*magic<<*puny<<*zog;

	//puny->intro();
	magic->polymorph(*puny);
	magic->polymorph(*zog);
	
	delete zog;
	delete puny;
	delete magic;
	return 0;
}