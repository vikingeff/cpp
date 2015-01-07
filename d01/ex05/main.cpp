/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 13:44:22 by gleger            #+#    #+#             */
/*   Updated: 2015/01/06 19:33:27 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <Human.hpp>
#include <Brain.hpp>

int		main(void)
{
	ZombieHorde		*horde;
	
	horde = new ZombieHorde(25);
	delete horde;
	return 0;
}