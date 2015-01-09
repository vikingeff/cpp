/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 10:54:14 by gleger            #+#    #+#             */
/*   Updated: 2015/01/09 02:29:24 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & ref);
	~ClapTrap();

	ClapTrap &			operator=(ClapTrap const & source);
	void				setHit_Points(unsigned int value);
	unsigned int 		getHit_Points() const;
	void				setMax_HP(unsigned int value);
	unsigned int 		getMax_HP() const;
	void				setEnergy_Points(unsigned int value);
	unsigned int 		getEnergy_Points() const;
	void				setMax_EP(unsigned int value);
	unsigned int 		getMax_EP() const;
	void				setLevel(unsigned int value);
	unsigned int 		getLevel() const;
	void				setName(std::string str);
	std::string			getName() const;
	void				setMelee_AD(unsigned int value);
	unsigned int 		getMelee_AD() const;
	void				setRanged_AD(unsigned int value);
	unsigned int 		getRanged_AD() const;
	void				setArmor_AR(unsigned int value);
	unsigned int 		getArmor_AR() const;
	unsigned int 		rangedAttack(std::string const & target);
	unsigned int 		meleeAttack(std::string const & target);
	void				takeDamage(unsigned int amount);
	void				beRepaired(unsigned int amount);
	void				baston();
	void				tellmetrap();
	void				initTrap();
	static int			getClapTrap(void);

private:
	static int			_nbClapTrap;
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
