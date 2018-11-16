#ifndef ANGLE_H
#define ANGLE_H
#include <cmath>

class Angle {
private:
	double angleValue;
	mutable bool sinBool;
	mutable bool cosBool;
	mutable double sinValue;
	mutable double cosValue;
	
public:
	Angle();
	Angle(double angleValue);
	virtual ~Angle();
	
	double getAngleValue() const;
	
	void set(double angleValue);
	
	double compare(double angle) const;
	
	Angle& compare(Angle& angle) const;
	
	Angle operator+(const Angle& angle) const;
	
	Angle operator-(const Angle& angle) const;
	
	const Angle& operator+=(const Angle& angle);
	
	const Angle& operator-=(const Angle& angle);
	
	Angle operator*(const Angle& angle) const;
	
	Angle operator/(const Angle& angle) const;
	
	const Angle& operator*=(const Angle& angle);
	
	const Angle& operator/=(const Angle& angle);
	
	bool operator==(const Angle& angle) const;
	
	const Angle& operator=(const Angle& angle);
	
	double getSin();
	double getCos();
}; // end of Angle class

#endif