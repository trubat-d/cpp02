#include "Fixed.hpp"

static float	power(float base, int n)
{
	float final = 1;

	while(n > 0)
	{
		final *= base;
		n--;
	}
	while(n < 0)
	{
		final /= base;
		n++;
	}
	return final;
}

Fixed::Fixed(void) : _stock(0)
{

}

Fixed::Fixed(const Fixed &other)
{
	*this = other;
}

Fixed::Fixed(const int raw)
{
	this->_stock = (int) (raw * power(2,this->_bits));
}

Fixed::Fixed(const float raw)
{
	this->_stock = (int) roundf(raw * power(2,this->_bits));
}

Fixed::~Fixed(void)
{
}

Fixed &Fixed::operator=(const Fixed &other)
{
	this->_stock = other.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	return this->_stock;
}

void Fixed::setRawBits(const int raw)
{
	this->_stock = raw;
}

float Fixed::toFloat() const
{
	return ((float)(this->_stock * power(2, (-1) * this->_bits)));
}

int Fixed::toInt() const
{
	return ((int)(this->_stock * power(2, (-1) * this->_bits)));
}

std::ostream & operator<<(std::ostream &o, Fixed const & other)
{
	o << other.toFloat();
	return o;
}

bool Fixed::operator>(const Fixed &other) const
{
	return (this->_stock > other.getRawBits());
}

bool	Fixed::operator<(const Fixed& other) const
{
	return (this->_stock < other.getRawBits());
}

bool	Fixed::operator>=(const Fixed& other) const
{
	return (this->_stock >= other.getRawBits());
}

bool	Fixed::operator<=(const Fixed& other) const
{
	return (this->_stock <= other.getRawBits());
}

bool	Fixed::operator==(const Fixed& other) const
{
	return (this->_stock == other.getRawBits());
}

bool	Fixed::operator!=(const Fixed& other) const
{
	return (this->_stock != other.getRawBits());
}

Fixed	Fixed::operator+(const Fixed& other) const
{
	float tmp = this->toFloat() + other.toFloat();
	return (Fixed(tmp));
}

Fixed	Fixed::operator-(const Fixed& other) const
{
	float tmp = this->toFloat() - other.toFloat();
	return (Fixed(tmp));
}

Fixed	Fixed::operator*(const Fixed& other) const
{
	float tmp = this->toFloat() * other.toFloat();
	return (Fixed(tmp));
}

Fixed	Fixed::operator/(const Fixed& other) const
{
	float tmp = this->toFloat() / other.toFloat();
	return (Fixed(tmp));
}

Fixed&	Fixed::operator++()
{
	++(this->_stock);
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed temp(*this);
	++(this->_stock);
	return (temp);
}

Fixed&	Fixed::operator--()
{
	--(this->_stock);
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed temp(*this);
	--(this->_stock);
	return (temp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a <= b ? a : b);
}

Fixed const &Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a.getRawBits() <= b.getRawBits() ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a >= b ? a : b);
}

Fixed const &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a.getRawBits() >= b.getRawBits() ? a : b);
}