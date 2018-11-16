#include "Log.h"

Log::Log() {
}

Log::~Log() {
}

Log& Log::getInstance() {
	static Log instance;
	return instance;
}

void Log::print(const std::string& s) const {
	std::cout << s;
}
