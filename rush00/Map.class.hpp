/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Map.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 10:24:40 by gleger            #+#    #+#             */
/*   Updated: 2015/01/12 02:52:13 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_CLASS_HPP
# define MAP_CLASS_HPP
# include <iostream>
# include <string>
# include <Object.class.hpp>
# include <Missile.class.hpp>
# include <ncurses.h>

# define XSIZ	65
# define YSIZ	100
# define HUD	5
# define HIDDEN	10

class Map
{

public:
	Map();
	Map(Map const & ref);
	~Map();

	Map &				operator=(Map const & source);
	void				setSizeX(int value);
	int 				getSizeX() const;
	void				setSizeY(int value);
	int 				getSizeY() const;
	void				setHidden(int value);
	int 				getHidden() const;
	void				setHud(int value);
	int 				getHud() const;
	char*				getMapline(int index);
	void				initpop(int sizepop);
	void				updatepop();
	void				add(Missile &weapon);
	void				display();
	void				initmap();
	static int			getNbMap();

private:
	static int			_nbMap;
	char				_map[XSIZ][YSIZ];
	int					_sizeX;
	int					_sizeY;
	int					_hidden;
	int					_hud;
	int 				_sizepop;
	Object				**_pop;

};

#endif
