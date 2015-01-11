/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Spaceship.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 10:20:37 by gleger            #+#    #+#             */
/*   Updated: 2015/01/11 10:21:27 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPACESHIP_CLASS_HPP
# define SPACESHIP_CLASS_HPP

# include <iostream>
# include <string>
# include <Object.class.hpp>

class Spaceship : public Object
{

public:
	Spaceship();
	Spaceship(Spaceship const & ref);
	~Spaceship();

	Spaceship &				operator=(Spaceship const & source);
	static int				getNbSpaceship();

private:
	static int				_nbSpaceship;

};

#endif
