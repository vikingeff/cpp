/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Map.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 10:24:28 by gleger            #+#    #+#             */
/*   Updated: 2015/01/11 11:35:35 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Map.class.hpp>
#define XSIZ	65
#define YSIZ	100
#define	HUD		5
#define	HIDDEN	10

Map::Map()
{
	Map::_nbMap++;
	this->_sizeX=XSIZ;
	this->_sizeY=YSIZ;
	this->_hidden=HIDDEN;
	this->_hud=HUD;
	std::cout << "Map Default constructor called." << std::endl;
}

Map::Map(Map const & ref)
{
	Map::_nbMap++;
	std::cout << "Map Copy constructor called." << std::endl;
	*this = ref;
}

Map::~Map()
{
	Map::_nbMap--;
	std::cout << "Map Destructor called." << std::endl;
}

Map &				Map::operator=(Map const & source)
{

	std::cout << "Map Assignation operator called" << std::endl;
	(void)source;
	//do some stuff
	return (*this);
}

void			Map::setSizeX(int value)
{
	this->_sizeX=value;
}

int 			Map::getSizeX() const
{
	return this->_sizeX;
}

void			Map::setSizeY(int value)
{
	this->_sizeY=value;
}

int 			Map::getSizeY() const
{
	return this->_sizeY;
}

void			Map::setHidden(int value)
{
	this->_hidden=value;
}

int 			Map::getHidden() const
{
	return this->_hidden;
}

void			Map::setHud(int value)
{
	this->_hud=value;
}

int 			Map::getHud() const
{
	return this->_hud;
}

void			Map::printmap()
{
	for (int i=this->getHidden(); i< this->getSizeX(); i++)
	{
		for (int j=0; j<this->getSizeY(); j++)
		{
			if (i==this->getSizeX()-this->getHud())
				std::cout<<"-";	
			else
			std::cout<<" ";
		}
		std::cout<<"|"<<std::endl;
	}
	std::cout<<std::endl;
}

int				Map::Map::getNbMap()
{
	return(Map::_nbMap);
}

int	Map::_nbMap=0;
