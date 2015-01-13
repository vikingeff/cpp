/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 14:43:44 by gleger            #+#    #+#             */
/*   Updated: 2015/01/13 00:29:17 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.class.hpp>

int		main()
{
	// Bureaucrat		*buro[4];

	// buro[0] = new Bureaucrat("Bobby", 1);
	// buro[1] = new Bureaucrat("Johny", 12);
	// std::cout<<buro[0]<<std::endl<<buro[1]<<std::endl;
	Bureaucrat test("antoine", 12);
	std::cout<<&test<<std::endl;
	// try
	// {
	// 	buro[2] = new Bureaucrat("Harry", 0);
	// }
	// catch (Bureaucrat::GradeTooHighException& e)
	// {	
	// 	std::cout<<e.what()<<std::endl;
	// }
	// try
	// {
	// 	buro[3] = new Bureaucrat("Billy", 160);
	// }
	// catch (Bureaucrat::GradeTooLowException & e)
	// {	
	// 	std::cout<<e.what()<<std::endl;
	// }
	// //std::cout<<buro[2]<<buro[3]<<std::endl;
	// buro[2] = new Bureaucrat("Harry", 8);
	// buro[3] = new Bureaucrat("Billy", 149);
	// buro[2]->increaseGrade(5);
	// buro[3]->decreaseGrade(1);
	// std::cout<<buro[2]<<std::endl<<buro[3]<<std::endl;
	// try
	// {
	// 	buro[2]->increaseGrade(5);
	// }
	// catch (Bureaucrat::GradeTooHighException& e)
	// {	
	// 	std::cout<<e.what()<<std::endl;
	// }
	// try
	// {
	// 	buro[3]->decreaseGrade(1);
	// }
	// catch (Bureaucrat::GradeTooLowException & e)
	// {	
	// 	std::cout<<e.what()<<std::endl;
	// }
	// std::cout<<buro[2]<<std::endl<<buro[3]<<std::endl;
	
	// for (int i=0; i<4; i++)
	// 	delete buro[i];
	return 0;
}