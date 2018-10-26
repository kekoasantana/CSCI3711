#include "Log.h"

Log::Log() {
}

Log& Log::getInstance() {
	static Log instance;
	return instance;
}
