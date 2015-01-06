/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 09:50:21 by gleger            #+#    #+#             */
/*   Updated: 2015/01/05 12:10:33 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		sizeit(char *str)
{
	int index=0;

	while (str[index] != '\0')
		index++;
	return (index);
}

char	uppercase(char letter)
{
	if (letter <= 122 && letter >=97)
		return (letter-32);
	else
		return (letter);
}

int 	main (int argc, char** argv)
{
	int size=0;
	if (argc != 1)
	{
		for (int j=1; j<argc; j++)
		{
			size = sizeit(argv[j]);
			for (int i=0; i<size; i++)
				std::cout<<uppercase(argv[j][i]);
		}
		std::cout<<std::endl;
		//std::cout << "Size : [" << argv[1] << "] " << size << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}