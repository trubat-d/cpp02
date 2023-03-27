#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{

}

Point::Point(const Point &other) : _x(other.getX()), _y(other.getY())
{

}

Point::Point(const float a, const float b) : _x(a), _y(b)
{

}

Point::~Point()
{

}

Point &Point::operator=(const Point &other)
{
	(void)other;
	return (*this);
}

Fixed Point::getX() const
{
	return (this->_x);
}

Fixed Point::getY() const
{
	return (this->_y);
}