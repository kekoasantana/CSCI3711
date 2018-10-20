#ifndef ANGLE_H
#define ANGLE_H

class Angle {
private:
	double angleValue;
	
public:
	Angle();
	Angle(double angleValue);
	virtual ~Angle();
	
	double getAngleValue() const;
	
	void set(double angleValue);
	
	Angle operator+(const Angle& angle) const;
	
	Angle operator-(const Angle& angle) const;
	
	Angle operator*(const Angle& angle) const;
	
	Angle operator/(const Angle& angle) const;
}; // end of Angle class

#endif