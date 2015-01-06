/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 13:43:44 by gleger            #+#    #+#             */
/*   Updated: 2015/01/06 16:43:12 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include <iostream>
#include <string>
#include <Zombie.hpp>

class ZombieEvent
{
public:	
	ZombieEvent();
	~ZombieEvent();

	void			setZombieType(std::string type);
	Zombie*			newZombie(std::string name);
	Zombie*			randomChump(void);
	static int		getNbEvent(void);

private:
	static int		_nbEvent;
	std::string		_zombieType;
};

#endif

