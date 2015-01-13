/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 19:54:40 by gleger            #+#    #+#             */
/*   Updated: 2015/01/13 00:42:44 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.class.hpp>
/*
Bureaucrat::Bureaucrat()			:_name("Bob"), _grade(149)
{
	Bureaucrat::_nbBureaucrat++;
	std::cout << "Bureaucrat Default constructor called." << std::endl;
}
*/
Bureaucrat::Bureaucrat(std::string name, int grade)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
	{
		this->_name=name;
		this->_grade=grade;
	}

	Bureaucrat::_nbBureaucrat++;
	std::cout << "Bureaucrat argumented constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & ref)
{
	Bureaucrat::_nbBureaucrat++;
	std::cout << "Bureaucrat Copy constructor called." << std::endl;
	*this = ref;
}

Bureaucrat::~Bureaucrat()
{
	Bureaucrat::_nbBureaucrat--;
	std::cout << "Bureaucrat Destructor called." << std::endl;
}

Bureaucrat &			Bureaucrat::operator=(Bureaucrat const & source)
{

	std::cout << "Bureaucrat Assignation operator called" << std::endl;
	(void)source;
	//do some stuff
	return (*this);
}

std::ostream &			operator<<(std::ostream & o, Bureaucrat const & source)
{

	o << source.getName() << ", bureaucrat grade " << source.getGrade() << "." << std::endl;
	return o;
}


int						Bureaucrat::getGrade() const {return this->_grade;}
void					Bureaucrat::setGrade(int value) {this->_grade=value;}
std::string				Bureaucrat::getName() const {return this->_name;}
void					Bureaucrat::setName(std::string value) {this->_name=value;}
void					Bureaucrat::increaseGrade(int value)
{
	if (this->getGrade()-value < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->setGrade(this->getGrade()-value);
}

void					Bureaucrat::decreaseGrade(int value)
{
	if (this->getGrade()+value > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->setGrade(this->getGrade()+value);
}

int			Bureaucrat::getNbBureaucrat()
{
	return(Bureaucrat::_nbBureaucrat);
}

int	Bureaucrat::_nbBureaucrat=0;
