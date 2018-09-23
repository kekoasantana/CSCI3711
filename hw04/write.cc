#include "write.h"

unsigned char* write(unsigned char* array, char* file) {
	FILE* fp = fopen(file, "wb");
	
	array = new unsigned char[1271400];
	fprintf(array, sizeof(char), 1271400, fp);
	
	fclose(fp);
	
	return array;
}
