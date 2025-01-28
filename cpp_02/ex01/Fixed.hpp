#pragma once

#include "iostream"
#include "cmath"

class Fixed
{
	private:
		int	entier;
		const static int	bits = 8;
/*-----------------------------------------------------*/

	public:
		Fixed();
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		~Fixed();
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
/*----------------------------------------------------*/
		Fixed(const int c_num);
		Fixed(const float f_num);
		float toFloat(void) const; //le const derrier dit quon peut pas modif les var private
		int toInt(void) const;
};

std::ostream & operator<<(std::ostream &o, Fixed const &i);
