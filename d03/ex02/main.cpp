/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 10:54:33 by gleger            #+#    #+#             */
/*   Updated: 2015/01/09 03:07:42 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <FragTrap.class.hpp>
#include <ScavTrap.class.hpp>
#include <ClapTrap.class.hpp>

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
	int			capa=0;
	int			damage=0;
	int			turn=1;
	
	srand(clock());
	a = new FragTrap("Nozzle");
	b = new ScavTrap("Rob Bott");
	capa = rand() % 3;
	std::cout<<a->getName()<<" Versus "<<b->getName()<<std::endl;
	a->tellmetrap();
	b->tellmetrap();
	while (a->getHit_Points()!=0 && b->getHit_Points()!=0)
	{
		std::cout<<"------------------------------------------------------------------"<<std::endl;
		std::cout<<"Turn number : "<<turn<<std::endl;
		damage = define_attack(*a, b->getName(),capa);
		b->takeDamage(damage);
		capa = rand() % 4;
		damage = define_attack(*b, a->getName(),capa);
		a->takeDamage(damage);
		turn++;
		if (a->getHit_Points()>0 && b->getHit_Points()>0)
		{
			a->baston();
			b->baston();
		}
	}
	/*a = new FragTrap("bob");
	a->tellmetrap();
	delete a;*/
	std::cout<<"-------------------------------RESULT-----------------------------"<<std::endl;
	a->tellmetrap();
	b->tellmetrap();
	std::cout<<"------------------------------------------------------------------"<<std::endl;
		
	if (a->getHit_Points()==0 && b->getHit_Points()==0)
		std::cout<<"It's a draw !!"<<std::endl;
	else if (a->getHit_Points()==0 && b->getHit_Points()!=0)
		std::cout<<b->getName()<<" won brillantly !!"<<std::endl;
	else
		std::cout<<a->getName()<<" won brillantly !!"<<std::endl;
	std::cout<<"------------------------------------------------------------------"<<std::endl;
		
	delete a;
	delete b;
	return 0;
}
