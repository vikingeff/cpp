/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 10:54:33 by gleger            #+#    #+#             */
/*   Updated: 2015/01/07 13:00:09 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Fixed.class.hpp>

int			main ()
{
	Fixed	a;
	Fixed	b(a);
	Fixed	c;

	c=b;

	std::cout << a.getRawBits () <<std::endl;
	std::cout << b.getRawBits () <<std::endl;
	std::cout << c.getRawBits () <<std::endl;

	return 0;
}
