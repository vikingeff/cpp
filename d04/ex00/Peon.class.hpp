/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 14:31:04 by gleger            #+#    #+#             */
/*   Updated: 2015/01/10 00:41:05 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include <string>
# include <Victim.class.hpp>

class Peon : public Victim
{

public:
	Peon(std::string name);
	Peon(Peon const & ref);
	~Peon();

	Peon &				operator=(Peon const & source);
	void				getPolymorphed() const;
	static int			getNbPeon();

private:
	Peon();
	static int	_nbPeon;

};

#endif
