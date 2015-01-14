/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/14 01:50:16 by gleger            #+#    #+#             */
/*   Updated: 2015/01/14 02:30:19 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <exception>

class Base		{public:virtual ~Base(void){}};
class A:public Base{};
class B:public Base{};
class C:public Base{};

Base * 		generate(void)
{
	int		RandIndex = rand() % 3;
	Base	*machin;
	
	switch(RandIndex)
	{
		case 0:machin = new A();
		return machin;
		break;
		case 1:machin = new B();
		return machin;
		break;
		case 2:machin = new C();
		return machin;
		break;
	}
	machin=new Base();
	return machin;
}

void		identify_from_pointer(Base *p)
{
	A	*test=dynamic_cast<A *>(p);
	if (test!=NULL)
	{	
		std::cout<<"A"<<std::endl;
		return;
	}
	B	*test2=dynamic_cast<B *>(p);
	if (test2!=NULL)
	{	
		std::cout<<"B"<<std::endl;
		return;
	}
	C	*test3=dynamic_cast<C *>(p);
	if (test3!=NULL)
	{	
		std::cout<<"C"<<std::endl;
		return;
	}
	std::cout<<"it's neither a A, a B nor a C, most likely is an Object of Base class !!"<<std::endl;
}

void		identfy_from_reference(Base & p)
{
	try
	{
		A & truc = dynamic_cast<A &>(p);
		std::cout<<"A"<<std::endl;
		return;
	}
	catch (std::exception& bc)
	{
		try
		{
			B & truc2 = dynamic_cast<B &>(p);
			std::cout<<"B"<<std::endl;
			return;
		}
		catch (std::exception& bc)
		{
			try
			{
				C & truc3 = dynamic_cast<C &>(p);
				std::cout<<"C"<<std::endl;
				return;
			}
			catch (std::exception& bc)
			{
				std::cout<<"it's neither a A, a B nor a C, most likely is an Object of Base class !!"<<std::endl;
				return;
			}
		}
	}
}

int main()
{
	Base	*test;

	srand(clock());
	for (int i=0; i<25; i++)
	{
		test = generate();
		identify_from_pointer(test);
	}	
	delete test;
	std::cout<<"---------------------------------------"<<std::endl;
	C	more;
	B	more2;
	A	more3;
	A & three=more3;
	B & two=more2;
	C & one=more;

	identfy_from_reference(one);
	identfy_from_reference(two);
	identfy_from_reference(three);
	return 0;
}
