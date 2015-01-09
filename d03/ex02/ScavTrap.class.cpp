/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 10:54:07 by gleger            #+#    #+#             */
/*   Updated: 2015/01/09 03:04:22 by gleger           ###   ########.fr       */
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

ScavTrap::ScavTrap()						:ClapTrap(),_name("FR4G-TP")
{
	std::cout<<"D: ";
	this->initTrap();
	ScavTrap::_nbScavTrap+=1;
	return;
}

ScavTrap::ScavTrap(std::string name)		:ClapTrap(name), _name(name)
{
	std::cout<<"N: ";
	this->initTrap();
	ScavTrap::_nbScavTrap+=1;
	return;
}

ScavTrap::ScavTrap(ScavTrap const & ref)	:ClapTrap()
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

int				ScavTrap::_nbScavTrap = 0;
