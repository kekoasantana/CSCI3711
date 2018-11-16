#include "Angle.h"

Angle::Angle() {
	sinBool = false;
	cosBool = false;
	this->angleValue = 0.0;
	
} // end of no-arg constructor 

Angle::Angle(double angleValue) {
	sinBool = false;
	cosBool = false;
	this->angleValue = angleValue;
	
} // end of constructor

Angle::~Angle() {
} // end of destructor

double Angle::getAngleValue() const {
	
	return angleValue;
	
} // end of getAngleValue method

void Angle::set(double angleValue) {
	sinBool = false;
	cosBool = false;
	this->angleValue = angleValue;
	
} // end of set method

double Angle::compare(double angle) const {
	if (angle > 360) {
		while(angle > 360) {
			angle -= 360;
		}
		return angle;
	} else if (angle < 0) {
		while (angle < 0) {
			angle += 360;
		}
		return angle;
	} else {
		return angle;
	}
}

Angle Angle::operator+(const Angle& angle) const {
	return Angle(compare(angleValue + angle.getAngleValue()));
}
Angle Angle::operator-(const Angle& angle) const {
	return Angle(compare(angleValue - angle.getAngleValue()));
}

const Angle& Angle::operator+=(const Angle& angle) {
	angleValue += angle.getAngleValue();
	angleValue = compare(angleValue);
	return *this;
}

const Angle& Angle::operator-=(const Angle& angle) {
	angleValue -= angle.getAngleValue();
	angleValue = compare(angleValue);
	return *this;
}
	
Angle Angle::operator*(const Angle& angle) const {
	return Angle(compare(angleValue * angle.getAngleValue()));
}
	
Angle Angle::operator/(const Angle& angle) const {
	return Angle(compare(angleValue/angle.getAngleValue()));	
}

const Angle& Angle::operator*=(const Angle& angle) {
	angleValue *= angle.getAngleValue();
	angleValue = compare(angleValue);
	return *this;
}

const Angle& Angle::operator/=(const Angle& angle) {
	angleValue /= angle.getAngleValue();
	angleValue = compare(angleValue);
	return *this;
}

bool Angle::operator==(const Angle& angle) const {
	return angleValue == angle.getAngleValue();
}

const Angle& Angle::operator=(const Angle& angle) {
	this->angleValue = getAngleValue();
	angleValue = compare(angleValue);
}

double Angle::getSin() {
	if (!sinBool) {
		sinValue = sin(angleValue*M_PI/180.0);
		sinBool = true;
	}
	return sinValue;
}

double Angle::getCos() {
	if (!cosBool) {
		cosValue = cos(angleValue*M_PI/180.0);
		cosBool = true;
	}
	return cosValue;
}
