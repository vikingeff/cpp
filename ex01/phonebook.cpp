/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 13:45:50 by gleger            #+#    #+#             */
/*   Updated: 2015/01/06 00:05:19 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Contact.class.hpp"

int			ft_atoi(const std::string str)
{
	if (str[1]!='\0')
		return (-1);
	else if (str[0] > 48 && str[0] < 58)
		return (str[0]-'0');
	else
		return (-1);
}

std::string	gettext()
{
	std::string		buff;

	if (std::getline (std::cin,buff))
	/*if (std::cin.eof() || std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore();
	}*/
		return buff;
	std::cout<<"There was an error during cin."<<std::endl;
	exit(-1);
}

Contact		add()
{
	Contact		men;
	
	std::cout<<"Please enter a firstname"<<std::endl;
	men.setFirstname(gettext());
	std::cout<<"Please enter a lastname"<<std::endl;
	men.setLastname(gettext());
	std::cout<<"Please enter a nickname"<<std::endl;
	men.setNickname(gettext());
	std::cout<<"Please enter a login"<<std::endl;
	men.setLogin(gettext());
	std::cout<<"Please enter a postal adress"<<std::endl;
	men.setPostal_adress(gettext());
	std::cout<<"Please enter a mail adress "<<std::endl;
	men.setEmail_adress(gettext());
	std::cout<<"Please enter a phone number"<<std::endl;
	men.setPhone_number(gettext());
	std::cout<<"Please enter a birth date"<<std::endl;
	men.setBirthday_date(gettext());
	std::cout<<"Please enter a favorite meal"<<std::endl;
	men.setFavorite_meal(gettext());
	std::cout<<"Please enter a underware color"<<std::endl;
	men.setUnderwear_color(gettext());
	std::cout<<"Please enter a darkest secret"<<std::endl;
	men.setDarkest_secret(gettext());
	return men;
}

int			size_string(std::string str)
{
	int			index=0;

	while(str[index]!='\0')
		index++;
	return index;
}
void		print_info(std::string str)
{
	int 		blanks=0;
	int			size=size_string(str);

	if (size>10)
	{
		for (int i=0; i<9; i++)
			std::cout<<str[i];
		std::cout<<'.';
	}
	else
	{
		blanks = 10-size;
		for (int i=0; i<blanks; i++)
			std::cout<<" ";
		for (int i=0; i<size; i++)
			std::cout<<str[i];
	}
	/*for (int i=0; i<10; i++)
	{
		blank=0;

		
		if (str[i]!='\0' && blank ==0)
		{
			if (i==9 && str[10]!='\0')
				std::cout<<'.';
			else
				std::cout<<str[i];
		}
		else
		{
			blank=i;
			std::cout<<" ";
		}
	}*/
	std::cout<<'|';
}

void		search(Contact bbook[], int size)
{
	int				choice=0;

	//std::cout<<bbook[0].getNickname()<<std::endl;
	do
	{
		system("clear");
		std::cout<<"Who is ?"<<std::endl;
		for (int i=0; i<size; i++)
		{
			std::cout<<"         "<<i+1<<"|";
			print_info(bbook[i].getFirstname());
			print_info(bbook[i].getLastname());
			print_info(bbook[i].getNickname());
			std::cout<<std::endl;
		}
		choice = ft_atoi(gettext());
	}while (choice >=size+1 || choice == -1);
	//{
		//if (choice <= size)
	//std::cout<<choice<<	std::endl;
	bbook[choice-1].printContact();
}

int			main()
{
	const int 		tab_book=8;
	int				size_book=0;
	Contact 		book[tab_book];
	std::string		command;
	int				code=0;
	Contact			buff;

	while (code!=-1)
	{
		if (code >= 0)
			system("clear");
		if (size_book!=0 && code ==1)
		{
			std::cout<<"you just created entry for : "<<book[size_book-1].getFirstname()<<" "<<book[size_book-1].getLastname()<<std::endl;
			code = 3;
		}
		std::cout<<"Your phonebook countains "<<size_book<<" elements."<<std::endl;
		std::cout<<"What do you want to do ?"<<std::endl;
		std::cout<<"Type a command in the following list : ADD, SEARCH, EXIT"<<std::endl;
		command = gettext();
		//std::cout<<command<<std::endl;
		if (command =="ADD")		{
			if (size_book <= 7)
			{
				buff = add();
				book[size_book]=buff;
				size_book++;
				code = 1;
			}
			else
				std::cout<<"Your phonebook is full sorry."<<std::endl;
		}
		else if (command=="SEARCH")
		{
			if (size_book ==0)
			{
				std::cout<<"Your phonebook is empty."<<std::endl;
				code = -4;
			}
			else
			{
				search(book, size_book);
				code = -3;
			}
		}
		else if (command=="EXIT")
			return(1);
		else
		{
			std::cout<<"Entry error."<<std::endl;
			code = -2;
		}
		/*switch(code)
		{
			case 1: std::cout<<"ADD"<<std::endl;
			break;
			case 2: std::cout<<"SEARCH"<<std::endl;
			break;
			case 3: exit();
			break;
			default: std::cout<<"Command unknown try again."<<std::endl;
			break;
		}*/
	}
	std::cout<<"There was an unexpected error."<<std::endl;
	return 0;
}
