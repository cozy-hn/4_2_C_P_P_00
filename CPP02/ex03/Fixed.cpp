#include "Fixed.hpp"

Fixed::Fixed(): value_(0)
{}

Fixed::Fixed(const Fixed& obj)
{
	*this = obj;
}

Fixed::~Fixed()
{}

Fixed&	Fixed::operator=(const Fixed& obj)
{
	if (this != &obj)
		value_ = obj.getRawBits();
	return *this;
}

Fixed::Fixed(const int value): value_(value << kbits_)
{}

Fixed::Fixed(const float value): value_(roundf(value * (1 << kbits_)))
{}

int		Fixed::getRawBits(void) const
{
	return value_;
}

void	Fixed::setRawBits(int const raw)
{
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

bool	Fixed::operator>(const Fixed& obj) const
{
	return value_ > obj.getRawBits();
}

bool	Fixed::operator<(const Fixed& obj) const
{
	return value_ < obj.getRawBits();
}

bool	Fixed::operator>=(const Fixed& obj) const
{
	return value_ >= obj.getRawBits();
}

bool	Fixed::operator<=(const Fixed& obj) const
{
	return value_ <= obj.getRawBits();
}

bool	Fixed::operator==(const Fixed& obj) const
{
	return value_ == obj.getRawBits();
}

bool	Fixed::operator!=(const Fixed& obj) const
{
	return value_ != obj.getRawBits();
}

Fixed	Fixed::operator+(const Fixed& obj) const
{
	return Fixed(toFloat() + obj.toFloat());
}

Fixed	Fixed::operator-(const Fixed& obj) const
{
	return Fixed(toFloat() - obj.toFloat());
}

Fixed	Fixed::operator*(const Fixed& obj) const
{
	return Fixed(toFloat() * obj.toFloat());
}

Fixed	Fixed::operator/(const Fixed& obj) const
{
	return Fixed(toFloat() / obj.toFloat());
}

Fixed&	Fixed::operator++(void)
{
	value_++;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return tmp;
}

Fixed&	Fixed::operator--(void)
{
	value_--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return tmp;
}

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	return a < b ? a : b;
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
	return a < b ? a : b;
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	return a > b ? a : b;
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	return a > b ? a : b;
}
