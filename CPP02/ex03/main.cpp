#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main( void ) {
	Point a(0, 0);
	Point b(0, 4);
	Point c(4, 0);
	Point point(2, 1);

	if (bsp(a, b, c, point))
		cout << "The point is inside the triangle.\n";
	else
		cout << "The point is outside the triangle.\n";
	return 0;
}