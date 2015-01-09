/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 10:54:14 by gleger            #+#    #+#             */
/*   Updated: 2015/01/09 02:40:25 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include <ClapTrap.class.hpp>

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & ref);
	~ScavTrap();

	ScavTrap &			operator=(ScavTrap const & source);
	unsigned int 		rangedAttack(std::string const & target);
	unsigned int 		meleeAttack(std::string const & target);
	unsigned int 		challengeNewcomer(std::string const & target);
	void				initTrap();
	static int			getScavTrap(void);

private:
	static int			_nbScavTrap;
	unsigned int		_hit_Points;
	unsigned int		_max_HP;
	unsigned int		_energy_Points;
	unsigned int		_max_EP;
	unsigned int		_level;
	std::string			_name;
	unsigned int		_melee_AD;
	unsigned int		_ranged_AD;
	unsigned int		_armor_DR;
};

#endif
