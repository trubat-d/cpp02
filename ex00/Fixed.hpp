#ifndef CPP_FIXED_HPP
#define CPP_FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
public:
	Fixed();
	Fixed(const Fixed & other);
	~Fixed();
	Fixed& operator=(const Fixed& other);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
private:
	int	_stock;
	static int const _bits = 8;
};


#endif //CPP_FIXED_HPP
