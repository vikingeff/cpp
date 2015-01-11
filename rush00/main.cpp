/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 10:12:31 by gleger            #+#    #+#             */
/*   Updated: 2015/01/11 15:57:17 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Object.class.hpp>
#include <Spaceship.class.hpp>
#include <Map.class.hpp>
#include <ncurses.h>

int main ()
{
	Spaceship		vso;
	Map				*game;
	WINDOW			*win;
	char			key;
	int				modif=1;

	game = new Map();
	key = 0;
	if ((win = initscr()) == NULL)
		return (-1);
	curs_set(0);
	noecho();
	cbreak();
	nodelay(win, TRUE);
	//init_curses_colors();
	//map = get_map();
	while (1)
	{
		if (key=='q')
			break ;
		if (modif==1)
		{
			//printmap
			for (int i=game->getHidden(); i< game->getSizeX(); i++)
			{
				//char	buff[game->getSizeY()]=game->_map[i];
				printw("%s",game->getMapline(i));
				//std::cout<<game->getMapline(i);
			}
			modif = 0;
		}
		//std::cout<<COLS<<std::endl;
		//addstr("test");
		refresh();
		clear();
		//game->printmap();
		key = getch();
	}
	delwin(win);
	endwin();

	delete game;
	return 0;
}
