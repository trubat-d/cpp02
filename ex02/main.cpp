#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed const c(12.5f);


	std::cout << "a is : " << a << std::endl;
	std::cout << "++a is : "<< ++a << std::endl;
	std::cout << "a is : " << a << std::endl;
	std::cout << "a++ is : " << a++ << std::endl;
	std::cout << "a is : " << a << std::endl;

	std::cout << "b is : " << b << std::endl;

	std::cout << "c is : " << c << std::endl;
	std::cout << "a + c : " << a + c << std::endl;
	std::cout << "a - c : " << a - c << std::endl;
	std::cout << "a * c : " << a * c << std::endl;
	std::cout << "a / c : " << a / c << std::endl;

	std::cout << "a == c : " << (a == c) << std::endl;
	std::cout << "a != c : " << (a != c) << std::endl;
	std::cout << "a < c : " << (a < c) << std::endl;
	std::cout << "a > c : " << (a > c) << std::endl;
	std::cout << "a >= c : " << (a >= c) << std::endl;
	std::cout << "a <= c : " << (a <= c) << std::endl;
	std::cout << "max value between a and c : " << Fixed::max(a,c) << std::endl;
	std::cout << "min value between a and c : " << Fixed::min(a,c) << std::endl;
	return 0;
}
