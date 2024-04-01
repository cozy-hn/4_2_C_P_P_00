#pragma once
#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point
{
	public:
		Point();
		Point(const Point& obj);
		~Point();
		Point&	operator=(const Point& obj);

		Point	operator-(const Point& obj) const;
		Point(Fixed const x, Fixed const y);
		Fixed const&	GetX() const;
		Fixed const&	GetY() const;

	private:
		Fixed const kx_;
		Fixed const ky_;
};

#endif
