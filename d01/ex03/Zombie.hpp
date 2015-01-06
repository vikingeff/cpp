/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 13:42:49 by gleger            #+#    #+#             */
/*   Updated: 2015/01/06 16:05:07 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
public:
	Zombie();
	~Zombie();

	std::string		getZombietype(void) const;
	void			setZombietype(std::string type);
	std::string		getZombiename(void) const;
	void			setZombiename(std::string name);
	std::string		getZombieclasse(void) const;
	void			setZombieclasse(std::string classe);
	void			announce();
	static int		getNbZombies(void);

private:
	static int		_nbZombies;
	std::string		_zombietype;
	std::string		_zombiename;
	std::string		_zombieclasse;
};

#endif
