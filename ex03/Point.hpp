#ifndef CPP_POINT_HPP
#define CPP_POINT_HPP

#include "Fixed.hpp"

class Point
{
public:
	Point();
	~Point();
	Point(const Point & other);
	Point(float const a, float const b);
	Point&	operator=(const Point& other);
	Fixed	getX(void) const;
	Fixed	getY(void) const;
private:
	Fixed const _x;
	Fixed const _y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif //CPP_POINT_HPP
