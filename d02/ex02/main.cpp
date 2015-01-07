/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 10:54:33 by gleger            #+#    #+#             */
/*   Updated: 2015/01/07 21:35:58 by gleger           ###   ########.fr       */
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
	Fixed	e(10);

	a=Fixed(1234.4321f);

	std::cout << "a is " << a <<std::endl;
	std::cout << "b is " << b <<std::endl;
	std::cout << "c is " << c <<std::endl;
	std::cout << "d is " << d <<std::endl;

	std::cout << "a is " << a.toInt() << " as integer" <<std::endl;
	std::cout << "b is " << b.toInt() << " as integer" <<std::endl;
	std::cout << "c is " << c.toInt() << " as integer" <<std::endl;
	std::cout << "d is " << d.toInt() << " as integer" <<std::endl;

	std::cout << a*b <<std::endl;
	std::cout << a+b <<std::endl;
	std::cout << a-b <<std::endl;
	std::cout << a/b <<std::endl;

	if (a>b)
		std::cout << "a>b" <<std::endl;
	else
		std::cout << "a<b" <<std::endl;

	if (a==b)
		std::cout << "a==b" <<std::endl;
	else
		std::cout << "a!=b" <<std::endl;

	if (e==b)
		std::cout << "e==b" <<std::endl;
	else
		std::cout << "e!=b" <<std::endl;
	/*std::cout << a<b <<std::endl;
	std::cout << a<=b <<std::endl;
	std::cout << a>=b <<std::endl;*/

	std::cout << "max entre " << a << " et " << b << " : " << Fixed::max( a, b ) << std::endl;
	std::cout << "min entre " << e << " et " << b << " : "  << Fixed::min( e, b ) << std::endl;
	std::cout << "min entre " << a << " et " << c << " : "  << Fixed::min( a, c ) << std::endl;
	
	return 0;
}
