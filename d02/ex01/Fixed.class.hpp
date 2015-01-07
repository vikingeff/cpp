/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleger <gleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 10:54:14 by gleger            #+#    #+#             */
/*   Updated: 2015/01/07 15:02:28 by gleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef Fixed_HPP
# define Fixed_HPP

#include <iostream>
#include <string>

class Fixed
{
public:
	Fixed();
	Fixed(int value);
	Fixed(float value);
	Fixed(Fixed const & ref);
	~Fixed();

	Fixed &			operator=(Fixed const & source);
	int				getRawBits(void) const;
	void			setRawBits(int const raw);
	void			printme() const;
	float			toFloat() const;
	int				toInt() const;
	static int		getNbFixed(void);

private:
	static int	_nbFixed;
	int			_rawBits;
	const int	_fracBits;
};

std::ostream &		operator<<(std::ostream & o, Fixed const & value);

#endif
