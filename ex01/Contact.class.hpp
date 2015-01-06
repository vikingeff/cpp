/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 12:23:20 by gleger            #+#    #+#             */
/*   Updated: 2015/01/06 01:21:07 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <iostream>
#include <string>

class Contact
{
public:
	Contact();
	~Contact();

	std::string		getLastname(void) const;
	void			setLastname(std::string str);
	std::string		getFirstname(void) const;
	void			setFirstname(std::string str);
	std::string		getNickname(void) const;
	void			setNickname(std::string str);
	std::string		getLogin(void) const;
	void			setLogin(std::string str);
	std::string		getPostal_adress(void) const;
	void			setPostal_adress(std::string str);
	std::string		getEmail_adress(void) const;
	void			setEmail_adress(std::string str);
	std::string		getPhone_number(void) const;
	void			setPhone_number(std::string str);
	std::string		getBirthday_date(void) const;
	void			setBirthday_date(std::string str);
	std::string		getFavorite_meal(void) const;
	void			setFavorite_meal(std::string str);
	std::string		getUnderwear_color(void) const;
	void			setUnderwear_color(std::string str);
	std::string		getDarkest_secret(void) const;
	void			setDarkest_secret(std::string str);
	void			printContact();
	static int		getNbContact(void);

private:
	static int	_nbContact;
	std::string _lastname;
	std::string _firstname;
	std::string _nickname;
	std::string _login;
	std::string _postal_adress;
	std::string _email_adress;
	std::string _phone_number;
	std::string _birthday_date;
	std::string _favorite_meal;
	std::string _underwear_color;
	std::string _darkest_secret;
};

#endif
