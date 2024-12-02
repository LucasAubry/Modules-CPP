#pragma once

#include "iostream"

class Fixed
{
	private:
		int	entier;
		const static int	bits;

	public:
		Fixed();
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		~Fixed();
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
};
