#ifndef LOG_H
#define LOG_H

#include <iostream>
#include <string>

class Log {
	
private:
	Log();
	
public:
	static Log& getInstance();
	
}; // end of Log class

#endif