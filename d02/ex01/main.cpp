/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 10:54:33 by gleger            #+#    #+#             */
/*   Updated: 2015/01/07 15:06:03 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Fixed.class.hpp>

int			main ()
{
	Fixed	a;
	Fixed	const b(10);
	Fixed	const c(42.42f);
	Fixed	const d(b);

	a=Fixed(1234.4321f);

	std::cout << "a is " << a <<std::endl;
	std::cout << "b is " << b <<std::endl;
	std::cout << "c is " << c <<std::endl;
	std::cout << "d is " << d <<std::endl;

	std::cout << "a is " << a.toInt() << " as integer" <<std::endl;
	std::cout << "b is " << b.toInt() << " as integer" <<std::endl;
	std::cout << "c is " << c.toInt() << " as integer" <<std::endl;
	std::cout << "d is " << d.toInt() << " as integer" <<std::endl;

	return 0;
}
