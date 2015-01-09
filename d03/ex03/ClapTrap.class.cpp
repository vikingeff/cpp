/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 10:54:07 by gleger            #+#    #+#             */
/*   Updated: 2015/01/09 03:05:59 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <cstdlib>
#include <ClapTrap.class.hpp>
#define HP		100;
#define MHP		100;
#define	EP		100;
#define MEP		100;
#define LEVEL	1;
#define MAD		30;
#define RAD		20;
#define	ADR		5;

ClapTrap::ClapTrap()						:_name("FR4G-TP")
{
	std::cout<<"Momy D: ";
	this->initTrap();
	ClapTrap::_nbClapTrap+=1;
	return;
}

ClapTrap::ClapTrap(std::string name)		:_name(name)
{
	std::cout<<"Momy N: ";
	this->initTrap();
	ClapTrap::_nbClapTrap+=1;
	return;
}

ClapTrap::ClapTrap(ClapTrap const & ref)
{
	std::cout<<"Momy C: ";
	*this=ref;
	ClapTrap::_nbClapTrap+=1;
	return;
}

ClapTrap::~ClapTrap()
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

	std::cout<< "Momy D: "<<death_list[RandIndex]<<std::endl;
	ClapTrap::_nbClapTrap-=1;
	return;
}

ClapTrap &			ClapTrap::operator=(ClapTrap const & source)
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

void				ClapTrap::setHit_Points(unsigned int value)
{
	this->_hit_Points = value;
}

unsigned int 		ClapTrap::getHit_Points() const
{
	return this->_hit_Points;
}

void				ClapTrap::setMax_HP(unsigned int  value)
{
	this->_max_HP = value;
}

unsigned int 		ClapTrap::getMax_HP() const
{
	return this->_max_HP;
}

void				ClapTrap::setEnergy_Points(unsigned int  value)
{
	this->_energy_Points = value;
}

unsigned int 		ClapTrap::getEnergy_Points() const
{
	return this->_energy_Points;
}

void				ClapTrap::setMax_EP(unsigned int  value)
{
	this->_max_EP = value;
}

unsigned int 		ClapTrap::getMax_EP() const
{
	return this->_max_EP;
}

void				ClapTrap::setLevel(unsigned int  value)
{
	this->_level = value;
}

unsigned int 		ClapTrap::getLevel() const
{
	return this->_level;
}

void				ClapTrap::setName(std::string str)
{
	this->_name = str;
}

std::string			ClapTrap::getName() const
{
	return this->_name;
}

void				ClapTrap::setMelee_AD(unsigned int  value)
{
	this->_melee_AD = value;
}

unsigned int 		ClapTrap::getMelee_AD() const
{
	return this->_melee_AD;
}

void				ClapTrap::setRanged_AD(unsigned int  value)
{
	this->_ranged_AD = value;
}

unsigned int 		ClapTrap::getRanged_AD() const
{
	return this->_ranged_AD;
}

void				ClapTrap::setArmor_AR(unsigned int  value)
{
	this->_armor_DR = value;
}

unsigned int 		ClapTrap::getArmor_AR() const
{
	return this->_armor_DR;
}

unsigned int 		ClapTrap::rangedAttack(std::string const & target)
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

unsigned int 		ClapTrap::meleeAttack(std::string const & target)
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

void				ClapTrap::takeDamage(unsigned int amount)
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

void				ClapTrap::beRepaired(unsigned int amount)
{
	int				life = (int)this->getHit_Points();
	int				max_life = (int)this->getMax_HP();

	std::cout<<"FR4G-TP "<<this->_name<<" repairs himself for "<<amount<<" hit points !"<<std::endl;
	if (life + (int)amount >= max_life)
		this->setHit_Points(max_life);
	else
		this->setHit_Points(life+(int)amount);
}

void				ClapTrap::initTrap()
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

void			ClapTrap::tellmetrap()
{
	std::cout<<"Here are the caracteristic of : "<<this->_name<<std::endl;
	std::cout<<"Level : "<<this->_level<<std::endl;
	std::cout<<"HP : "<<this->_hit_Points << "/" << this->_max_HP <<std::endl;
	std::cout<<"Energy : "<<this->_energy_Points << "/" << this->_max_EP <<std::endl;
	std::cout<<"Melee power : "<<this->_melee_AD<<std::endl;
	std::cout<<"Range power : "<<this->_ranged_AD<<std::endl;
	std::cout<<"Armor : "<<this->_armor_DR<<std::endl;
}

void			ClapTrap::baston()
{
	std::cout<<this->_name<<std::endl;
	std::cout<<"HP : "<<this->_hit_Points << "/" << this->_max_HP <<std::endl;
	std::cout<<"Energy : "<<this->_energy_Points << "/" << this->_max_EP <<std::endl;
}

int				ClapTrap::_nbClapTrap = 0;
