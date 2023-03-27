#ifndef CPP_FIXED_HPP
#define CPP_FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
public:
	Fixed();
	Fixed(const Fixed & other);
	Fixed(int const raw);
	Fixed(float const raw);
	~Fixed();
	Fixed& operator=(const Fixed& other);
	float	toFloat(void) const;
	int		toInt(void) const;
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
private:
	int	_stock;
	static int const _bits = 8;
};

std::ostream & operator<<(std::ostream& o, Fixed const & other);

#endif //CPP_FIXED_HPP
