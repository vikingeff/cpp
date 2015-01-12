/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Object.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 10:12:16 by gleger            #+#    #+#             */
/*   Updated: 2015/01/11 20:18:35 by gleger           ###   ########.fr       */
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
	Object(int posX, int posY);
	~Object();

	Object &			operator=(Object const & source);
	int					getPosX();
	void				setPosX(int value);
	int					getPosY();
	void				setPosY(int value);
	int					getOldPosX();
	void				setOldPosX(int value);
	int					getOldPosY();
	void				setOldPosY(int value);
	static int			getNbObject();

protected:
	int					_posX;
	int					_posY;
	int					_oldposX;
	int					_oldposY;
	int					_sizeX;
	int					_sizeY;
	int					_level;
	int					_xpvalue;
private:
	static int			_nbObject;
	

};

#endif
