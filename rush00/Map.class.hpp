/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Map.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 10:24:40 by gleger            #+#    #+#             */
/*   Updated: 2015/01/11 11:23:59 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_CLASS_HPP
# define MAP_CLASS_HPP
# include <iostream>
# include <string>

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
	void				printmap();
	static int			getNbMap();

private:
	static int			_nbMap;
	std::string			_map[];
	int					_sizeX;
	int					_sizeY;
	int					_hidden;
	int					_hud;

};

#endif
