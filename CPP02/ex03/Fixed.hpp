#pragma once
#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

using std::cout;
using std::ostream;

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed& obj);
		~Fixed();
		Fixed&	operator=(const Fixed& obj);

		Fixed(int const value);
		Fixed(float const value);

		Fixed	operator+(const Fixed& obj) const;
		Fixed	operator-(const Fixed& obj) const;
		Fixed	operator*(const Fixed& obj) const;
		Fixed	operator/(const Fixed& obj) const;
		bool	operator>(const Fixed& obj) const;
		bool	operator<(const Fixed& obj) const;
		bool	operator>=(const Fixed& obj) const;
		bool	operator<=(const Fixed& obj) const;
		bool	operator==(const Fixed& obj) const;
		bool	operator!=(const Fixed& obj) const;

		Fixed&	operator++(void);
		Fixed	operator++(int);
		Fixed&	operator--(void);
		Fixed	operator--(int);

		static Fixed&	min(Fixed& a, Fixed& b);
		static Fixed&	max(Fixed& a, Fixed& b);
		static const Fixed&	min(const Fixed& a, const Fixed& b);
		static const Fixed&	max(const Fixed& a, const Fixed& b);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;	

	private:
		static const int kbits_ = 8;
		int value_;
};

ostream&	operator<<(ostream& os, const Fixed& obj);

#endif
