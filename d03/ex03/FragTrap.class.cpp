/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 10:54:07 by gleger            #+#    #+#             */
/*   Updated: 2015/01/09 03:03:40 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <cstdlib>
#include <FragTrap.class.hpp>
#include <ClapTrap.class.hpp>
#define HP		100;
#define MHP		100;
#define	EP		100;
#define MEP		100;
#define LEVEL	1;
#define MAD		30;
#define RAD		20;
#define	ADR		5;

FragTrap::FragTrap()						:ClapTrap(), _name("FR4G-TP")
{
	std::cout<<"D: ";
	this->initTrap();
	FragTrap::_nbFragTrap+=1;
	return;
}

FragTrap::FragTrap(std::string name)		:ClapTrap(name)
{
	std::cout<<"N: ";
	this->initTrap();
	FragTrap::_nbFragTrap+=1;
	return;
}

FragTrap::FragTrap(FragTrap const & ref)	:ClapTrap()	
{
	std::cout<<"C: ";
	*this=ref;
	FragTrap::_nbFragTrap+=1;
	return;
}

FragTrap::~FragTrap()
{
	std::string 	death_list[] = {"I am a tornado of death and bullets!",
									"Hehehehe...",
									"You call yourself a badass?",
									"Wow, did I really do that?",
									"Can, can I open my eyes now?",
									"Flesh fireworks!",
									"Oh quit falling to pieces.",
									"Is that what people look like inside?",
									"Ooh, squishy bits!"};
	int				list_size = 9;
	int				RandIndex = rand() % list_size;

	std::cout<< "D: "<<death_list[RandIndex]<<std::endl;
	FragTrap::_nbFragTrap-=1;
	return;
}

FragTrap &			FragTrap::operator=(FragTrap const & source)
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

unsigned int 		FragTrap::rangedAttack(std::string const & target)
{
	std::string 	ranged_list[] = {"Now you're sorted!",
								"Snoiped!",
								"Crack shot!"};
	int				list_size = 3;
	int				RandIndex = rand() % list_size;

	std::cout<<ranged_list[RandIndex];
	std::cout<<" FR4G-TP "<<this->_name<<" attacks "<<target<<" at range, causing "<<this->_ranged_AD<<" points of damage !"<<std::endl;
	return this->_ranged_AD;
}

unsigned int 		FragTrap::meleeAttack(std::string const & target)
{
	std::string 	melee_list[] = {"This is why you do your homework!",
								"Class is now in session",
								"Hee Yah!",
								"Take That",
								"Bop!",
								"Hyah!"};
	int				list_size = 6;
	int				RandIndex = rand() % list_size;

	std::cout<<melee_list[RandIndex];
	std::cout<<" FR4G-TP "<<this->_name<<" melee attacks "<<target<<", causing "<<this->_melee_AD<<" points of damage !"<<std::endl;
	return this->_melee_AD;
}

unsigned int 		FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string 	power_list[] = {"Crashing Unstoppable Energy Flash",
								"Energy Penetrating Lance Barrage",
								"Murdering Bane Gory Crashing",
								"Slaughter Deadly Crashing Execution",
								"Omni Battler Kill Fatal Lance",
								"Intergalactic Planetary Omni Beam",
								"Sylvan Botanical Floral Bloom",
								"Venus Lovely Charm Tender Strike"};
	int				list_size = 8;
	int				RandIndex = rand() % list_size;
	int				damage = (rand() % 30) + 15;
	std::cout<<"FR4G-TP "<<this->_name<<" use his "<<power_list[RandIndex]<<", causing "<<target<<" "<<damage<<" points of damage !"<<std::endl;
	return damage;
}

void				FragTrap::initTrap()
{
	std::string 	spawn_list[] = {"Hey everybody! Check out my package!",
								"Let's get this party started!",
								"Glitching weirdness is a term of endearment, right?",
								"Recompiling my combat code!",
								"This time it'll be awesome, I promise!",
								"Look out everybody! Things are about to get awesome!"};
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

int				FragTrap::_nbFragTrap = 0;
