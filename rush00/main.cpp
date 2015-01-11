/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 10:12:31 by gleger            #+#    #+#             */
/*   Updated: 2015/01/11 11:31:24 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Object.class.hpp>
#include <Spaceship.class.hpp>
#include <Map.class.hpp>

int main ()
{
	Spaceship		vso;
	Map				*game;

	game = new Map();
	game->printmap();
	delete game;
	return 0;
}
