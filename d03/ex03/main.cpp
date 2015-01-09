/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 10:54:33 by gleger            #+#    #+#             */
/*   Updated: 2015/01/09 04:28:43 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <FragTrap.class.hpp>
#include <ScavTrap.class.hpp>
#include <ClapTrap.class.hpp>
#include <NinjaTrap.class.hpp>

int			define_attack(FragTrap &a, std::string b, int power)
{
	int			damage=0;
	switch (power)
	{
		case 0:damage=a.rangedAttack(b);
		return damage;
		case 1:damage=a.meleeAttack(b);
		return damage;
		case 2 :
		if (a.getEnergy_Points()>=25)
		{
			damage=a.vaulthunter_dot_exe(b);
			a.setEnergy_Points(a.getEnergy_Points()-25);
		}
		else
		{
			std::cout<<"FR4G-TP "<<a.getName()<<" fails special attack because his mana is too low."<<std::endl;
			damage=0;
		}			
		return damage;
		case 3 :a.beRepaired((unsigned int)rand()%25+10);
		return 0;
	}
	return 0;
}

int			define_attack(ScavTrap &a, std::string b, int power)
{
	int			damage=0;
	switch (power)
	{
		case 0:damage=a.rangedAttack(b);
		return damage;
		case 1:damage=a.meleeAttack(b);
		return damage;
		case 2 :
		if (a.getEnergy_Points()>=10)
		{
			damage=a.challengeNewcomer(b);
			a.setEnergy_Points(a.getEnergy_Points()-10);
		}
		else
		{
			std::cout<<"FR4G-TP "<<a.getName()<<" fails special attack because his mana is too low."<<std::endl;
			damage=0;
		}			
		return damage;
		case 3 :a.beRepaired((unsigned int)rand()%25+10);
		return 0;
	}
	return 0;
}	

int			main ()
{
	FragTrap	*a;
	ScavTrap	*b;
	ClapTrap	*c;
	NinjaTrap	*d;
	int			damage=0;
	
	srand(clock());
	a = new FragTrap("Nozzle");
	b = new ScavTrap("Rob Bott");
	c = new ClapTrap("Spanner");
	d = new NinjaTrap("Drillbit");

	d->tellmetrap();
	c->tellmetrap();
	damage=d->ninjaShoebox(*c);
	c->takeDamage(damage);
	c->tellmetrap();
	b->tellmetrap();
	damage=d->ninjaShoebox(*b);
	b->takeDamage(damage);
	b->tellmetrap();
	a->tellmetrap();
	a->takeDamage(damage);
	damage=d->ninjaShoebox(*a);
	a->takeDamage(damage);
	a->tellmetrap();
	damage=d->ninjaShoebox(*d);
	
	delete d;
	delete c;
	delete b;
	delete a;
	return 0;
}
