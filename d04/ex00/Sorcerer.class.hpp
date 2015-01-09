/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 14:32:41 by gleger            #+#    #+#             */
/*   Updated: 2015/01/09 14:32:43 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>
# include <Victim.class.hpp>

class Sorcerer
{

public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const & ref);
	~Sorcerer();

	Sorcerer &			operator=(Sorcerer const & source);
	void				setName(std::string value);
	std::string 		getName() const;
	void				setTitle(std::string value);
	std::string 		getTitle() const;
	void				polymorph(Victim const & nonocent) const;
	void				intro() const;
	static int			getNbSorcerer();

private:
	Sorcerer();
	std::string		_name;
	std::string		_title;
	static int		_nbSorcerer;
};

std::ostream &		operator<<(std::ostream & o, Sorcerer const & value);

#endif
