/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 10:12:31 by gleger            #+#    #+#             */
/*   Updated: 2015/01/12 02:52:20 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Object.class.hpp>
#include <Spaceship.class.hpp>
#include <Map.class.hpp>
#include <Missile.class.hpp>

#define posX	25
#define posY	15
#define OBJZ	1024

int main ()
{
	Spaceship		vso;
	Map				*game;
	WINDOW			*win;
	char			key;
	int				counter=0;
	int				update=0;

	game = new Map();
	game->initpop(OBJZ);
	key = 0;
	if ((win = initscr()) == NULL)
		return (-1);
	curs_set(0);
	noecho();
	cbreak();
	nodelay(win, TRUE);
	vso.setPosX(posX);
	vso.setPosY(posY);
	//init_curses_colors();
	//map = get_map();
	while (1)
	{
		key = getch();
		if (key=='p')
			break ;
		if (update == 1)
		{
			clear();
			update=0;
		}
		if (counter>0)
		{
			game->updatepop();
			game->display();
			//calculate_new_position()
			//mvprintw(tabo[counter-1]->getPosX(), tabo[counter-1]->getPosY()," ");
			//mvprintw(tabo[counter-1]->getPosX()-1, tabo[counter-1]->getPosY(),"o");
			//tabo[counter-1]->setPosX(tabo[counter-1]->getPosX()-1);
			//tabo[0]->setOldPosX(tabo[0]->getPosX());
			//tabo[counter-1]->setOldPosX(tabo[counter-1]->getPosX());
			//tabo[counter-1]->setPosX(tabo[counter-1]->getPosX()-1);
			//mvprintw(tabo[counter-1]->getOldPosX(), tabo[counter-1]->getPosY()," ");
			//mvprintw(tabo[0]->getOldPosX(), tabo[0]->getPosY()," ");
			
			//clear();
			//tabo[0]->setPosX(tabo[0]->getPosX()-1);

		}
		switch (key)
		{
			case 's':vso.setPosX(vso.getPosX()+1);
				update=1;
				break;
			case 'z':vso.setPosX(vso.getPosX()-1);
				//clear();
				update=1;
				break;
			case 'd':vso.setPosY(vso.getPosY()+1);
				update=1;
				//clear();
				break;
			case 'q':vso.setPosY(vso.getPosY()-1);
				update=1;
				//clear();
				break;
			case ' '://tabo[counter] = new Missile(vso.getPosX()-1, vso.getPosY()+1);
				//clear();
				//mvprintw(tabo[0]->getPosX(), tabo[0]->getPosY(),"o");
				//mvprintw(tabo[counter]->getPosX(), tabo[counter]->getPosY(),"o");
				game->add(*new Missile(vso.getPosX()-1, vso.getPosY()+1));
				counter++;
				update=1;
				break;
		}
		/*if (modif==1)
		{
			//printmap
			for (int i=game->getHidden(); i< game->getSizeX(); i++)
			{
				//char	buff[game->getSizeY()]=game->_map[i];
				printw("%s",game->getMapline(i));
				//std::cout<<game->getMapline(i);
			}
			modif = 0;
		}*/
		//std::cout<<COLS<<std::endl;
			//for (int i=0; i<counter; i++)
		mvprintw(vso.getPosX(), vso.getPosY(),"/-\\");
		mvprintw(vso.getPosX()+1, vso.getPosY(),"\\_/");
		refresh();
		//clear();
		//game->printmap();
	}
	delwin(win);
	endwin();
	//for (int i=0; i<counter; i++)
	//	delete tabo[counter];
	//delete tabo;
	delete game;
	return 0;
}
