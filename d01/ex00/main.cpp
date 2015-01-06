/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 10:54:33 by gleger            #+#    #+#             */
/*   Updated: 2015/01/06 11:51:55 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Pony.hpp>

int			main ()
{
	 Pony		harry = Pony("Stack");
	 Pony*		john = new Pony("Heap");

	 harry.ponyOnTheStack();
	 john->ponyOnTheHeap();
	 delete john;

	 return 0;
}
