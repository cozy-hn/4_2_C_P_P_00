#include "Point.hpp"

float cross(Point const p1, Point const p2)
{
	return p1.GetX().toFloat() * p2.GetY().toFloat() - p1.GetY().toFloat() * p2.GetX().toFloat();
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	return (cross(b - a, point - a) * cross(point - a, c - a) > 0 &&
		cross(c - b, point - b) * cross(point - b, a - b) > 0);
}