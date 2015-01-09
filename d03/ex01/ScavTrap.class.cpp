/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 10:54:07 by gleger            #+#    #+#             */
/*   Updated: 2015/01/09 01:31:57 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <cstdlib>
#include <ScavTrap.class.hpp>
#define HP		100;
#define MHP		100;
#define	EP		50;
#define MEP		50;
#define LEVEL	1;
#define MAD		20;
#define RAD		15;
#define	ADR		3;

ScavTrap::ScavTrap()						:_name("FR4G-TP")
{
	std::cout<<"D: ";
	this->initTrap();
	ScavTrap::_nbScavTrap+=1;
	return;
}

ScavTrap::ScavTrap(std::string name)		:_name(name)
{
	std::cout<<"N: ";
	this->initTrap();
	ScavTrap::_nbScavTrap+=1;
	return;
}

ScavTrap::ScavTrap(ScavTrap const & ref)
{
	std::cout<<"C: ";
	*this=ref;
	ScavTrap::_nbScavTrap+=1;
	return;
}

ScavTrap::~ScavTrap()
{
	std::string 	death_list[] = {"Boogie time!",
									"Lasers!",
									"Psychedellic man!",
									"Everybody, dance time! Da-da-da-dun-daaa-da-da-da-dun-daaa!",
									"One for you, one for you, and one for you!",
									"Avast ye scurvy dogs!",
									"Is this really canon?",
									"I feel a joke about poop decks coming on!",
									"One shot, make it count!"};
	int				list_size = 9;
	int				RandIndex = rand() % list_size;

	std::cout<< "D: "<<death_list[RandIndex]<<std::endl;
	ScavTrap::_nbScavTrap-=1;
	return;
}

ScavTrap &			ScavTrap::operator=(ScavTrap const & source)
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

void				ScavTrap::setHit_Points(unsigned int value)
{
	this->_hit_Points = value;
}

unsigned int 		ScavTrap::getHit_Points() const
{
	return this->_hit_Points;
}

void				ScavTrap::setMax_HP(unsigned int  value)
{
	this->_max_HP = value;
}

unsigned int 		ScavTrap::getMax_HP() const
{
	return this->_max_HP;
}

void				ScavTrap::setEnergy_Points(unsigned int  value)
{
	this->_energy_Points = value;
}

unsigned int 		ScavTrap::getEnergy_Points() const
{
	return this->_energy_Points;
}

void				ScavTrap::setMax_EP(unsigned int  value)
{
	this->_max_EP = value;
}

unsigned int 		ScavTrap::getMax_EP() const
{
	return this->_max_EP;
}

void				ScavTrap::setLevel(unsigned int  value)
{
	this->_level = value;
}

unsigned int 		ScavTrap::getLevel() const
{
	return this->_level;
}

void				ScavTrap::setName(std::string str)
{
	this->_name = str;
}

std::string			ScavTrap::getName() const
{
	return this->_name;
}

void				ScavTrap::setMelee_AD(unsigned int  value)
{
	this->_melee_AD = value;
}

unsigned int 		ScavTrap::getMelee_AD() const
{
	return this->_melee_AD;
}

void				ScavTrap::setRanged_AD(unsigned int  value)
{
	this->_ranged_AD = value;
}

unsigned int 		ScavTrap::getRanged_AD() const
{
	return this->_ranged_AD;
}

void				ScavTrap::setArmor_AR(unsigned int  value)
{
	this->_armor_DR = value;
}

unsigned int 		ScavTrap::getArmor_AR() const
{
	return this->_armor_DR;
}

unsigned int 		ScavTrap::rangedAttack(std::string const & target)
{
	std::string 	ranged_list[] = {"I see you Neytiri!",
								"Head shot mothafocka!",
								"Lick my balls!"};
	int				list_size = 3;
	int				RandIndex = rand() % list_size;

	std::cout<<ranged_list[RandIndex];
	std::cout<<" FR4G-TP "<<this->_name<<" attacks "<<target<<" at range, causing "<<this->_ranged_AD<<" points of damage !"<<std::endl;
	return this->_ranged_AD;
}

unsigned int 		ScavTrap::meleeAttack(std::string const & target)
{
	std::string 	melee_list[] = {"In your anus!",
								"Welcome",
								"Mouwahaha!",
								"NI",
								"Clap clap!",
								"Yatta!"};
	int				list_size = 6;
	int				RandIndex = rand() % list_size;

	std::cout<<melee_list[RandIndex];
	std::cout<<" FR4G-TP "<<this->_name<<" melee attacks "<<target<<", causing "<<this->_melee_AD<<" points of damage !"<<std::endl;
	return this->_melee_AD;
}

void				ScavTrap::takeDamage(unsigned int amount)
{
	int				life=this->getHit_Points();
	int				shield=this->getArmor_AR();

	if ((int)amount !=0)
	{
		if (life+shield-(int)amount <= 0)
			this->setHit_Points(0);
		else
			this->setHit_Points(life+shield-amount);
	}
}

void				ScavTrap::beRepaired(unsigned int amount)
{
	int				life = (int)this->getHit_Points();
	int				max_life = (int)this->getMax_HP();

	std::cout<<"FR4G-TP "<<this->_name<<" repairs himself for "<<amount<<" hit points !"<<std::endl;
	if (life + (int)amount >= max_life)
		this->setHit_Points(max_life);
	else
		this->setHit_Points(life+(int)amount);
}

unsigned int 		ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string 	challenge_list[] = {"Wanna make a car castle ?",
								"Let's run backward around the school.",
								"I eat beef i eat sauce and we kiss to see what happens.",
								"Take my hat and put a boob in it.",
								"Depending on the weather tomorrow i'll eat a potato.",
								"Let's ride a horse naked and the have sex in the bushes",
								"Slap bet ?",
								"Poke me here with a knife !!"};
	int				list_size = 8;
	int				RandIndex = rand() % list_size;
	int				damage = 0;

	std::cout<<"FR4G-TP "<<this->_name<<" challenges "<<target<<" : "<<challenge_list[RandIndex]<<std::endl;
	return damage;
}

void				ScavTrap::initTrap()
{
	std::string 	spawn_list[] = {"It's not a dream. Destroy is real!",
								"Enjoy bombs.",
								"Apple - You see this name, you think dirty.",
								"Don't worry, secret stach takes care.",
								"Kill makes me hot!",
								"Don't play with fire, play with Kentucky."};
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

void			ScavTrap::tellmetrap()
{
	std::cout<<"Here are the caracteristic of : "<<this->_name<<std::endl;
	std::cout<<"Level : "<<this->_level<<std::endl;
	std::cout<<"HP : "<<this->_hit_Points << "/" << this->_max_HP <<std::endl;
	std::cout<<"Energy : "<<this->_energy_Points << "/" << this->_max_EP <<std::endl;
	std::cout<<"Melee power : "<<this->_melee_AD<<std::endl;
	std::cout<<"Range power : "<<this->_ranged_AD<<std::endl;
	std::cout<<"Armor : "<<this->_armor_DR<<std::endl;
}

void			ScavTrap::baston()
{
	std::cout<<this->_name<<std::endl;
	std::cout<<"HP : "<<this->_hit_Points << "/" << this->_max_HP <<std::endl;
	std::cout<<"Energy : "<<this->_energy_Points << "/" << this->_max_EP <<std::endl;
}

int				ScavTrap::_nbScavTrap = 0;
