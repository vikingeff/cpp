/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 13:43:44 by gleger            #+#    #+#             */
/*   Updated: 2015/01/06 18:25:03 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include <iostream>
#include <string>
#include <Zombie.hpp>

class ZombieHorde
{
public:	
	ZombieHorde(int nbChumps);
	~ZombieHorde();

	void			setZombieType(std::string type);
	void			randomNames(int nbChumps);
	static int		getNbHorde(void);

private:
	static int		_nbHorde;
	std::string		_zombieType;
	Zombie 			*_zombietab;	
};

#endif

