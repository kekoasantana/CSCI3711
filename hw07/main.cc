#include <iostream>
#include "Angle.h"

int main() {
	// initial angles
	Angle a1(250.0);
	Angle a2(300.0);
	Angle a3(200.0);
	Angle a4(150.0);
	Angle a5(200.0);
	Angle a15(100.0);
	Angle a17(100.0);
	
	// modifying the angles
	Angle a6 = a1.operator+(a2);
	Angle a7 = a1.operator-(a2);
	Angle a8 = a1.operator+=(a2);
	Angle a9 = a3.operator-=(a2);
	Angle a10 = a1.operator*(a2);
	Angle a11 = a1.operator/(a2);
	Angle a12 = a4.operator*=(a2);
	Angle a13 = a5.operator/=(a2);
	Angle a14 = a15.operator=(a2);
	bool a16 = a15.operator==(a17);
	
	std::cout << a6.getAngleValue() << std::endl;
	std::cout << a7.getAngleValue() << std::endl;
	std::cout << a8.getAngleValue() << std::endl;
	std::cout << a9.getAngleValue() << std::endl;
	std::cout << a10.getAngleValue() << std::endl;
	std::cout << a11.getAngleValue() << std::endl;
	std::cout << a12.getAngleValue() << std::endl;
	std::cout << a13.getAngleValue() << std::endl;
	std::cout << a14.getAngleValue() << std::endl;
	std::cout << a16 << std::endl;
}