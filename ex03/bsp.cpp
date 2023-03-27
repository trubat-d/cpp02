#include "Point.hpp"

static float sign(Point const a, Point const b, Point const c)
{
	return (((a.getX().toFloat() - c.getX().toFloat()) * \
	(b.getY().toFloat() - c.getY().toFloat()) - \
	(b.getX().toFloat() - c.getX().toFloat()) * \
	(a.getY().toFloat() - c.getY().toFloat())));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float p1, p2, p3;
	bool neg, pos;

	p1 = sign(point,a,b);
	p2 = sign(point,b,c);
	p3 = sign(point,c,a);

	neg = (p1 < 0) || (p2 < 0) || (p3 < 0);
	pos = (p1 > 0) || (p2 > 0) || (p3 > 0);

	return !(neg && pos);
}