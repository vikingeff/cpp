/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 13:44:22 by gleger            #+#    #+#             */
/*   Updated: 2015/01/06 18:02:30 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <Zombie.hpp>
#include <ZombieHorde.hpp>

int		main(void)
{
	ZombieHorde		*horde;
	
	horde = new ZombieHorde(25);
	delete horde;
	return 0;
}