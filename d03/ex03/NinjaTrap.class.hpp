/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 10:54:14 by gleger            #+#    #+#             */
/*   Updated: 2015/01/09 03:52:46 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NinjaTrap_HPP
# define NinjaTrap_HPP

# include <iostream>
# include <string>
# include <ClapTrap.class.hpp>
# include <ScavTrap.class.hpp>
# include <FragTrap.class.hpp>

class NinjaTrap : public ClapTrap
{
public:
	NinjaTrap();
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const & ref);
	~NinjaTrap();

	NinjaTrap &			operator=(NinjaTrap const & source);
	unsigned int 		ninjaShoebox(ClapTrap const & target);
	unsigned int 		ninjaShoebox(ScavTrap const & target);
	unsigned int 		ninjaShoebox(FragTrap const & target);
	unsigned int 		ninjaShoebox(NinjaTrap const & target);
	void				initTrap();
	static int			getNinjaTrap(void);

private:
	static int			_nbNinjaTrap;
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
