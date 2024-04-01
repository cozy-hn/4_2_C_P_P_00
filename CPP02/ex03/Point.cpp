#include "Point.hpp"

Point::Point(): kx_(0), ky_(0)
{}

Point::Point(Fixed const x, Fixed const y): kx_(x), ky_(y)
{}

Point::Point(const Point& obj)
{
	*this = obj;
}

Point::~Point()
{}

Point&	Point::operator=(const Point& obj)
{
	if (this != &obj)
	{
		this->~Point();
		new(this) Point(obj.kx_.toFloat(), obj.ky_.toFloat());
	}
	return *this;
}

Point	Point::operator-(const Point& obj) const
{
	return Point(kx_ - obj.kx_, ky_ - obj.ky_);
}

Fixed const&	Point::GetX() const
{
	return kx_;
}

Fixed const&	Point::GetY() const
{
	return ky_;
}