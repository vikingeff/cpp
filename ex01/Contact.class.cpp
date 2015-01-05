/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 12:23:44 by gleger            #+#    #+#             */
/*   Updated: 2015/01/05 18:36:33 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

Contact::Contact()
{
	this->_lastname="";
	this->_firstname="";
	this->_nickname="";
	this->_login="";
	this->_postal_adress="";
	this->_email_adress="";
	this->_phone_number="";
	this->_birthday_date="";
	this->_favorite_meal="";
	this->_underwear_color="";
	this->_darkest_secret="";
	std::cout<<"Contact constructed."<<std::endl;
	return;
}

Contact::~Contact()
{
	std::cout<<"Contact destructed."<<std::endl;
	return;
}

std::string		Contact::getLastname(void) const
{
	return this->_lastname;
}
void			Contact::setLastname(std::string str)
{
	this->_lastname = str;
}
std::string		Contact::getFirstname(void) const
{
	return this->_firstname;
}
void			Contact::setFirstname(std::string str)
{
	this->_firstname = str;
}
std::string		Contact::getNickname(void) const
{
	return this->_nickname;
}
void			Contact::setNickname(std::string str)
{
	this->_nickname = str;
}
std::string		Contact::getLogin(void) const
{
	return this->_login;
}
void			Contact::setLogin(std::string str)
{
	this->_login = str;
}
std::string		Contact::getPostal_adress(void) const
{
	return this->_postal_adress;
}
void			Contact::setPostal_adress(std::string str)
{
	this->_postal_adress = str;
}
std::string		Contact::getEmail_adress(void) const
{
	return this->_email_adress;
}
void			Contact::setEmail_adress(std::string str)
{
	this->_postal_adress = str;
}
std::string		Contact::getPhone_number(void) const
{
	return this->_phone_number;
}
void			Contact::setPhone_number(std::string str)
{
	this->_phone_number = str;
}
std::string		Contact::getBirthday_date(void) const
{
	return this->_birthday_date;
}
void			Contact::setBirthday_date(std::string str)
{
	this->_birthday_date = str;
}
std::string		Contact::getFavorite_meal(void) const
{
	return this->_favorite_meal;
}
void			Contact::setFavorite_meal(std::string str)
{
	this->_favorite_meal = str;
}
std::string		Contact::getUnderwear_color(void) const
{
	return this->_underwear_color;
}
void			Contact::setUnderwear_color(std::string str)
{
	this->_underwear_color = str;
}
std::string		Contact::getDarkest_secret(void) const
{
	return this->_darkest_secret;
}
void		Contact::setDarkest_secret(std::string str)
{
	this->_darkest_secret = str;
}
void		Contact::printContact()
{
	std::cout<<this->_lastname<<std::endl;
	std::cout<<this->_firstname<<std::endl;;
	std::cout<<this->_nickname<<std::endl;;
	std::cout<<this->_login<<std::endl;;
	std::cout<<this->_postal_adress<<std::endl;;
	std::cout<<this->_email_adress<<std::endl;;
	std::cout<<this->_phone_number<<std::endl;;
	std::cout<<this->_birthday_date<<std::endl;;
	std::cout<<this->_favorite_meal<<std::endl;;
	std::cout<<this->_underwear_color<<std::endl;;
	std::cout<<this->_darkest_secret<<std::endl;;
}
