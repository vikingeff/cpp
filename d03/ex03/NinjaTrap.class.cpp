/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 10:54:07 by gleger            #+#    #+#             */
/*   Updated: 2015/01/09 04:33:18 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <NinjaTrap.class.hpp>
#include <ClapTrap.class.hpp>
#define HP		60;
#define MHP		60;
#define	EP		120;
#define MEP		120;
#define LEVEL	1;
#define MAD		60;
#define RAD		5;
#define	ADR		0;

NinjaTrap::NinjaTrap()						:ClapTrap(),_name("FR4G-TP")
{
	std::cout<<"D: ";
	this->initTrap();
	NinjaTrap::_nbNinjaTrap+=1;
	return;
}

NinjaTrap::NinjaTrap(std::string name)		:ClapTrap(name), _name(name)
{
	std::cout<<"N: ";
	this->initTrap();
	NinjaTrap::_nbNinjaTrap+=1;
	return;
}

NinjaTrap::NinjaTrap(NinjaTrap const & ref)	:ClapTrap()
{
	std::cout<<"C: ";
	*this=ref;
	NinjaTrap::_nbNinjaTrap+=1;
	return;
}

NinjaTrap::~NinjaTrap()
{
	std::string 	death_list[] = {"i'm not dead",
									"All your base are belong to us !!",
									"Yoghurt please with xtra marmelade",
									"Money money money ....",
									"Ro ro rasputin !!!"};
	int				list_size = 5;
	int				RandIndex = rand() % list_size;

	std::cout<< "D: "<<death_list[RandIndex]<<std::endl;
	NinjaTrap::_nbNinjaTrap-=1;
	return;
}

NinjaTrap &			NinjaTrap::operator=(NinjaTrap const & source)
{
	std::cout<<"Assignation operator called"<<std::endl;
	_name= source.getName();
	_level= source.getLevel();
	_hit_Points= source.getHit_Points();
	_max_HP= source.getMax_HP();
	_energy_Points= source.getEnergy_Points();
	_max_EP= source.getMax_EP();
	_melee_AD= source.getMelee_AD();
	_ranged_AD= source.getRanged_AD();
	_armor_DR= source.getArmor_AR();
	return *this;
}

unsigned int 		NinjaTrap::ninjaShoebox(ClapTrap const & target)
{
	std::string 	shoe = "A ninja and a clap are on a boat ...";
	int				damage = rand() % 15+5;

	std::cout<<"FR4G-TP "<<this->_name<<" says : "<<shoe<<" and sneakily do "<<damage<<" damages to "<<target.getName()<<std::endl;
	return damage;
}

unsigned int 		NinjaTrap::ninjaShoebox(ScavTrap const & target)
{
	std::string 	shoe = "The world is divided in 2 categories...";
	int				damage = rand() % 25+5;

	std::cout<<"FR4G-TP "<<shoe<<this->_name<<" and "<<target.getName()<<" dealing "<<damage<<" damages !!"<<std::endl;
	return damage;
}

unsigned int 		NinjaTrap::ninjaShoebox(FragTrap const & target)
{
	int				damage = rand() % 45+20;

	std::cout<<"FR4G-TP "<<this->_name<<" insults "<<target.getName()<<" and and throw shurikensso fast that he does "<<damage<<" damages."<<std::endl;
	return damage;
}

unsigned int 		NinjaTrap::ninjaShoebox(NinjaTrap const & target)
{
	int				damage = 0;

	std::cout<<"FR4G-TP "<<this->_name<<" high ninja five with "<< target.getName()<<" !!"<<std::endl;
	return damage;
}

void				NinjaTrap::initTrap()
{
	std::string 	spawn_list[] = {"Ninja",
								"Ninjaaa",
								"Ninjaaaaaaa",
								"Ninjaaaaaaaaaaaa",
								"Ninjaaaaaaaaaaaaaaaaaaaaaa",
								"Ninjaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
	int				list_size = 6;
	int				RandIndex = rand() % list_size;

	std::cout<<spawn_list[RandIndex]<<std::endl;
	this->_hit_Points = HP;
	this->_max_HP = MHP;
	this->_energy_Points = EP;
	this->_max_EP = MEP;
	this->_level = LEVEL;
	this->_melee_AD = MAD;
	this->_ranged_AD = RAD;
	this->_armor_DR = ADR;
}

int				NinjaTrap::_nbNinjaTrap = 0;
