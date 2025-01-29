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
		Fixed(const int c_num);
		Fixed(const float f_num);
		float toFloat(void) const; //le const derrier dit quon peut pas modif les var private
		int toInt(void) const;
/*----------------------------------------------------*/
		bool operator>(const Fixed& other) const;
		bool operator<(const Fixed& other) const;
		bool operator>=(const Fixed& other)const;
		bool operator<=(const Fixed& other)const;
		bool operator==(const Fixed& other)const;
		bool operator!=(const Fixed& other)const;

		Fixed operator+(const Fixed& other)const;
		Fixed operator-(const Fixed& other)const;
		Fixed operator*(const Fixed& other)const;
		Fixed operator/(const Fixed& other)const;

		Fixed &operator++(void);//incrementation avant psk (void)
		Fixed operator++(int);//incrementation apres psk (int)
		Fixed &operator--(void);
		Fixed operator--(int);

		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);


};

std::ostream & operator<<(std::ostream &o, Fixed const &i);
