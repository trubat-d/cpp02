#ifndef CPP_FIXED_HPP
#define CPP_FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
public:
	Fixed();
	Fixed(const Fixed & other);
	Fixed(int const raw);
	Fixed(float const raw);
	~Fixed();
	static	const Fixed& min(const Fixed& a, const Fixed& b);
	static	Fixed& min(Fixed& a, Fixed& b);
	static	const Fixed& max(const Fixed& a, const Fixed& b);
	static	Fixed& max(Fixed& a, Fixed& b);
	Fixed&	operator=(const Fixed& other);
	bool	operator>(const Fixed& other) const;
	bool	operator<(const Fixed& other) const;
	bool	operator>=(const Fixed& other) const;
	bool	operator<=(const Fixed& other) const;
	bool	operator==(const Fixed& other) const;
	bool	operator!=(const Fixed& other) const;
	Fixed	operator+(const Fixed& other) const;
	Fixed	operator-(const Fixed& other) const;
	Fixed	operator*(const Fixed& other) const;
	Fixed	operator/(const Fixed& other) const;
	Fixed&	operator++();
	Fixed	operator++(int);
	Fixed&	operator--();
	Fixed	operator--(int);
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
