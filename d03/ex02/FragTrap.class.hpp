/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 10:54:14 by gleger            #+#    #+#             */
/*   Updated: 2015/01/09 02:40:23 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include <ClapTrap.class.hpp>

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const & ref);
	~FragTrap();

	FragTrap &			operator=(FragTrap const & source);
	unsigned int 		rangedAttack(std::string const & target);
	unsigned int 		meleeAttack(std::string const & target);
	unsigned int 		vaulthunter_dot_exe(std::string const & target);
	void				initTrap();
	static int			getFragTrap(void);

private:
	static int			_nbFragTrap;
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
