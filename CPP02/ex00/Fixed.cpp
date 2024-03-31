#include "Fixed.hpp"

Fixed::Fixed(): value_(0)
{
	cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& obj)
{
	cout << "Copy constructor called\n";
	*this = obj;
}

Fixed::~Fixed()
{
	cout << "Destructor called\n";
}

Fixed&	Fixed::operator=(const Fixed& obj)
{
	cout << "Assignation operator called\n";
	if (this != &obj)
		value_ = obj.getRawBits();
	return *this;
}

int		Fixed::getRawBits(void) const
{
	cout << "getRawBits member function called\n";
	return value_;
}

void	Fixed::setRawBits(int const raw)
{
	cout << "setRawBits member function called\n";
	value_ = raw;
}