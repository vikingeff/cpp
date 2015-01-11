/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Object.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 10:12:16 by gleger            #+#    #+#             */
/*   Updated: 2015/01/11 10:12:17 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OBJECT_CLASS_HPP
# define OBJECT_CLASS_HPP

# include <iostream>
# include <string>

class Object
{

public:
	Object();
	Object(Object const & ref);
	~Object();

	Object &			operator=(Object const & source);
	static int			getNbObject();

protected:
	int					_posX;
	int					_posY;
	int					_sizeX;
	int					_sizeY;
	int					_level;
	int					_xpvalue;
private:
	static int			_nbObject;
	

};

#endif
