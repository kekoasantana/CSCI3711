#include <cstdio>
#include "Angle.h"

int main() {

	Angle a1(250.0);
	Angle a2(50.0);
	
	Angle a3 = a1.operator+(a2);
	Angle a4 = a1.operator-(a2);
	Angle a5 = a1.operator*(a2);
	Angle a6 = a1.operator/(a2);
	
	
	printf("%.1lf\n", a3.getAngleValue());
	printf("%.1lf\n", a4.getAngleValue());
	printf("%.1lf\n", a5.getAngleValue());
	printf("%.1lf\n", a6.getAngleValue());
}