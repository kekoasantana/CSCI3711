#ifndef ANGLE_H
#define ANGLE_H
#include <string>

class Angle {
private:
	double angleValue;
	
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
}; // end of Angle class

#endif