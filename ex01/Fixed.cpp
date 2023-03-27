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
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::Fixed(const int raw)
{
	std::cout << "Int constructor called" << std::endl;
	this->_stock = (int) (raw * power(2,this->_bits));
}

Fixed::Fixed(const float raw)
{
	std::cout << "Float constructor called" << std::endl;
	this->_stock = (int) roundf(raw * power(2,this->_bits));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
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