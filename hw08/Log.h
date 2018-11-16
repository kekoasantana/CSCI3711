#ifndef LOG_H
#define LOG_H

#include <iostream>
#include <string>
#include "Angle.h"

class Log {
	
private:
	Log();
	
public:
	virtual ~Log();
	static Log& getInstance();
	void print(const std::string& s) const;
	
}; // end of Log class

#endif