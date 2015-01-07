/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 18:47:55 by gleger            #+#    #+#             */
/*   Updated: 2015/01/06 19:27:03 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		main()
{
	std::string		text;
	std::string*	textptr;
	std::string&	textref=text;

	text = "HI THIS IS BRAIN";
	textptr = &text;

	std::cout << "the string is : "<<text<<std::endl;
	std::cout << "the pointer to string is : " << *textptr << std::endl;
	std::cout << "the reference to string is : " << textref << std::endl;
	return 0;
}
