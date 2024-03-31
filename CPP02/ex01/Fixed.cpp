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

Fixed::Fixed(const int value): value_(value << kbits_)
{
	cout << "Int constructor called\n";
}

Fixed::Fixed(const float value): value_(roundf(value * (1 << kbits_)))
{
	cout << "Float constructor called\n";
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

int		Fixed::toInt(void) const
{
	return value_ >> kbits_;
}

float	Fixed::toFloat(void) const
{
	return static_cast<float>(value_) / (1 << kbits_);
}

ostream&	operator<<(ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return os;
}