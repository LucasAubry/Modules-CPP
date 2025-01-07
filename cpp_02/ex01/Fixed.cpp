#include "Fixed.hpp"

Fixed::Fixed()
{
	this->entier = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy contructor called" << std::endl;
	this->setRawBits(other.getRawBits());
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &other)
		this->entier = other.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->entier);
}

void Fixed::setRawBits(int const raw)
{
	this->entier = raw;
}
/*-----------------------------------------------------------------*/

Fixed::Fixed(const int c_num)
{
	this->entier = c_num << bits;//decal a gauche soit c_num * 256 psk on decal de 8 bits
	std::cout << "Int constructor called" << std::endl;
//pour convertire un num en float faire * 256 et / si inversement
}

Fixed::Fixed(const float f_num)
{
	this->entier = froundf(f_num * (1 << this->bits));// decal binaire a gauche
//le 1 permet de cree une puissance de 2 qui est necessaire pour decal le f_num
	std::cout << "Float constructor called" << std::endl;
}

float toFloat(void) const
{
	return (static_cast<float>(this->getRawBits()) / (1 << bits));
}

int toInt(void) const
{
	return ((this->entier >> bits);
}

std::ostream & operator<<(std::ostream & o, Fixed const & i)
{
	o << i.toFloat();
	return (o);
}
