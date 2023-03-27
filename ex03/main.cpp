#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
	Point const a(0,0);
	Point const b(10, 10);
	Point const c(10, 0);
	Point const check1(1, 1);
	Point const check2(100, 1);
	std::cout << "is the point 1, 1 inside of a triangle a(0,0)b(10,10)c(10,0) : " << bsp(a,b,c,check1) << std::endl;
	std::cout << "is the point 100, 1 inside of a triangle a(0,0)b(10,10)c(10,0) : " << bsp(a,b,c,check2) << std::endl;
	return 0;
}
