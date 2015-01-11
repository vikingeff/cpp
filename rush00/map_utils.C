/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmasse <rmasse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 19:42:10 by rmasse            #+#    #+#             */
/*   Updated: 2014/11/09 19:42:12 by rmasse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemipc.h"
#include <curses.h>

void		init_info(t_info *infos)
{
	infos->players = 0;
	infos->red = 0;
	infos->green = 0;
	infos->white = 0;
	infos->yellow = 0;
	infos->width = sqrt(MAXSIZE);
	clear();
	attron(COLOR_PAIR(6));
	addstr("LEM_IPC VIEWER (press 'q' to quit)");
}

char		*get_map(void)
{
	int		shmid;
	char	*shm;

	if ((shmid = shmget(KEY, MAXSIZE, 0666)) < 0)
		exit(0);
	if ((shm = shmat(shmid, NULL, 0)) == NULL)
		exit(0);
	return (shm);
}
