#include "Angle.h"

/*
I couldn't quite get the comparisons working
but here is the operator overloaders working 
for +, -, *, and /.
*/

Angle::Angle() {
	
	this->angleValue = 0.0;
	
} // end of no-arg constructor 

Angle::Angle(double angleValue) {
	
	this->angleValue = angleValue;
	
} // end of constructor

Angle::~Angle() {
} // end of destructor

double Angle::getAngleValue() const {
	
	return angleValue;
	
} // end of getAngleValue method

void Angle::set(double angleValue) {
	
	this->angleValue = angleValue;
	
} // end of set method

Angle Angle::operator+(const Angle& angle) const {
	return Angle(angleValue + angle.getAngleValue());
}
Angle Angle::operator-(const Angle& angle) const {
	return Angle(angleValue - angle.getAngleValue());
}
	
Angle Angle::operator*(const Angle& angle) const {
	return Angle(angleValue * angle.getAngleValue());
}
	
Angle Angle::operator/(const Angle& angle) const {
	return Angle(angleValue/angle.getAngleValue());	
}