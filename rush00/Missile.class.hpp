/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Missile.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 18:52:52 by gleger            #+#    #+#             */
/*   Updated: 2015/01/11 18:58:16 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MISSILE_CLASS_HPP
# define MISSILE_CLASS_HPP

# include <iostream>
# include <string>
# include <Object.class.hpp>

class Missile : public Object
{

public:
	Missile();
	Missile(Missile const & ref);
	Missile(int	posX, int posY);
	~Missile();

	Missile &				operator=(Missile const & source);
	static int				getNbMissile();

private:
	static int				_nbMissile;

};

#endif
