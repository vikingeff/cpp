/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 13:42:49 by gleger            #+#    #+#             */
/*   Updated: 2015/01/06 19:40:46 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
public:
	Brain();
	~Brain();

	int				getBrainIQ(void) const;
	void			setBrainIQ(int level);
	void			identify();
	static int		getNbBrains(void);

private:
	static int		_nbBrains;
	int				_BrainIQ;
};

#endif
