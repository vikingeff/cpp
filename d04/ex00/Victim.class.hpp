/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 14:31:22 by gleger            #+#    #+#             */
/*   Updated: 2015/01/10 00:49:33 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Victim_HPP
# define Victim_HPP

# include <iostream>
# include <string>

class Victim
{

public:
	Victim();
	Victim(std::string name);
	Victim(Victim const & ref);
	virtual ~Victim();

	Victim &			operator=(Victim const & source);
	void				setName(std::string value);
	std::string 		getName() const;
	virtual void		getPolymorphed() const;
	void				intro() const;
	static int			getNbVictim();

private:
	std::string		_name;
	static int		_nbVictim;

};

std::ostream &		operator<<(std::ostream & o, Victim const & value);

#endif
