#include "Fixed.hpp"

Fixed::Fixed()
{
	this->entier = 0;
//	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
//	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
//	std::cout << "Copy contructor called" << std::endl;
	this->setRawBits(other.getRawBits());
}

Fixed& Fixed::operator=(const Fixed& other)
{
//	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &other)
		this->entier = other.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return (this->entier);
}

void Fixed::setRawBits(int const raw)
{
	this->entier = raw;
}

Fixed::Fixed(const int c_num)
{
	this->entier = c_num << bits;//decal a gauche soit c_num * 256 psk on decal de 8 bits
//	std::cout << "Int constructor called" << std::endl;
//pour convertire un num en float faire * 256 et / si inversement
}

Fixed::Fixed(const float f_num)
{
	this->entier = roundf(f_num * (1 << this->bits));// decal binaire a gauche
//le 1 permet de cree une puissance de 2 qui est necessaire pour decal le f_num
//	std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(this->getRawBits()) / (1 << bits));
}

int Fixed::toInt(void) const
{
	return (this->entier >> bits);
}

std::ostream & operator<<(std::ostream & o, Fixed const & i)
{
	o << i.toFloat();
	return (o);
}

/*-----------------------------------------------------------------*/

bool Fixed::operator>(const Fixed& other)const
{
//	std::cout << "supp assignement operator called" << std::endl;
	return this->getRawBits() < other.getRawBits();
}

bool Fixed::operator<(const Fixed& other)const
{
//	std::cout << "inf assignement operator called" << std::endl;
	return this->getRawBits() > other.getRawBits();
}

bool Fixed::operator>=(const Fixed& other)const
{
	return this->getRawBits() >= other.getRawBits();
}

bool Fixed::operator<=(const Fixed& other)const
{
	return this->getRawBits() <= other.getRawBits();
}

bool Fixed::operator==(const Fixed& other)const
{
	return this->getRawBits() == other.getRawBits();
}

bool Fixed::operator!=(const Fixed& other)const
{
	return this->getRawBits() != other.getRawBits();
}

Fixed Fixed::operator+(const Fixed& other)const
{
	return (this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other)const
{
	return (this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other)const
{
	return (this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other)const
{
	return (this->toFloat() / other.toFloat());
}

Fixed &Fixed::operator++(void)
{
	this->entier++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->entier++;
	return tmp;
}

Fixed &Fixed::operator--(void)
{
	this->entier--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->entier--;
	return tmp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

