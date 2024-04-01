#include "Point.hpp"

float cross(Point const p1, Point const p2)
{
	return p1.GetX().toFloat() * p2.GetY().toFloat() - p1.GetY().toFloat() * p2.GetX().toFloat();
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float sign1 = cross(b - a, point - a) * cross(point - a, c - a);
	float sign2 = cross(c - b, point - b) * cross(point - b, a - b);

	if (sign1 > 0 && sign2 > 0)
		return true;
	return false;
}