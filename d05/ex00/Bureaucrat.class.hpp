/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 19:54:28 by gleger            #+#    #+#             */
/*   Updated: 2015/01/13 00:42:17 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CLASS_HPP
# define BUREAUCRAT_CLASS_HPP

# include <iostream>
# include <string>
# define BIG 1
# define LOW 150

class Bureaucrat
{

	public : class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException();
		GradeTooHighException(GradeTooHighException const & ref);
		virtual ~GradeTooHighException() throw();

		GradeTooHighException & 		operator=(GradeTooHighException const & source);
		virtual const char* what() const throw ()
		{
			return ("Basically the grade you entered is too big !!");
		}
	};

	public : class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException();
		GradeTooLowException(GradeTooLowException const & ref);
		virtual ~GradeTooLowException() throw();

		GradeTooLowException &			operator=(GradeTooLowException const & source);
		virtual const char* what() const throw ()
		{
			return ("Basically the grade you entered is too low !!");
		}
	};

public:
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();

	Bureaucrat &			operator=(Bureaucrat const & source);
	int						getGrade() const;
	void					setGrade(int value);
	std::string				getName() const;
	void					setName(std::string value);
	void					increaseGrade(int value);
	void					decreaseGrade(int value);
	static int				getNbBureaucrat();

private:
	Bureaucrat();
	Bureaucrat(Bureaucrat const & ref);
	static int				_nbBureaucrat;
	int						_grade;
	std::string				_name;

};

std::ostream &				operator<<(std::ostream & o, Bureaucrat & source);

#endif
