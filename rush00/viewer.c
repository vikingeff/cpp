/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   viewer.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmasse <rmasse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 20:11:58 by rmasse            #+#    #+#             */
/*   Updated: 2014/11/09 20:12:00 by rmasse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemipc.h"
#include <curses.h>

void		print_infos(t_info infos)
{
	attron(COLOR_PAIR(6));
	printw("\nTotal players: %d\n", infos.players);
	attron(COLOR_PAIR(1));
	printw(" %d ", infos.red);
	attron(COLOR_PAIR(2));
	printw(" %d ", infos.green);
	attron(COLOR_PAIR(3));
	printw(" %d ", infos.white);
	attron(COLOR_PAIR(4));
	printw(" %d \n", infos.yellow);
	refresh();
	usleep(100000);
}

void		get_team_info(t_info *infos, int team)
{
	infos->players++;
	attron(COLOR_PAIR(team));
	if (team == 1)
		infos->red++;
	else if (team == 2)
		infos->green++;
	else if (team == 3)
		infos->white++;
	else if (team == 4)
		infos->yellow++;
}

void		print_map(char *map)
{
	int		i;
	t_info	infos;

	i = -1;
	init_info(&infos);
	while (++i < MAXSIZE)
	{
		if (!(i % infos.width))
			addch('\n');
		attron(COLOR_PAIR(6));
		if (map[i] != '.')
			get_team_info(&infos, atoi(&map[i]));
		addch('.');
	}
	print_infos(infos);
}

void		init_curses_colors(void)
{
	start_color();
	init_pair(1, COLOR_BLACK, COLOR_RED);
	init_pair(2, COLOR_BLACK, COLOR_GREEN);
	init_pair(3, COLOR_BLACK, COLOR_WHITE);
	init_pair(4, COLOR_BLACK, COLOR_YELLOW);
	init_pair(6, COLOR_BLUE, COLOR_BLACK);
}

int			main(void)
{
	WINDOW	*win;
	char	*map;
	char	key;

	key = 0;
	if ((win = initscr()) == NULL)
		return (-1);
	curs_set(0);
	noecho();
	cbreak();
	nodelay(win, TRUE);
	init_curses_colors();
	map = get_map();
	while (1)
	{
		if (key == 'q')
			break ;
		print_map(map);
		key = getch();
	}
	delwin(win);
	endwin();
	return (0);
}
