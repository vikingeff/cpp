/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 10:54:14 by gleger            #+#    #+#             */
/*   Updated: 2015/01/06 11:12:21 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>
#include <string>

class Pony
{
public:
	Pony(std::string where);
	~Pony();

	int				getHorn_size(void) const;
	void			setHorn_size(int size);
	std::string		getPony_color(void) const;
	void			setPony_color(std::string str);
	std::string		getCatch_phrase(void) const;
	void			setCatch_phrase(std::string str);
	void			printPony();
	void			ponyOnTheHeap();
	void			ponyOnTheStack();
	static int		getNbPonies(void);

private:
	static int	_nbPonies;
	int 		_horn_size;
	std::string _pony_color;
	std::string _catch_phrase;
};

#endif
