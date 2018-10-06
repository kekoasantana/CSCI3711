#include "read.h"

unsigned char* read(const char* file, char* ppmIndicator, int* width, int* height, int* maximum) {
	FILE* fp = fopen(file, "rb");
	
	fscanf(fp, "%s", ppmIndicator);
	
	fscanf(fp, "%d %d", width, height);
	
	fscanf(fp, "%d\n", maximum);
	
	int size = *width * *height * 3;
	
	unsigned char* array = new unsigned char[size];
	fread(array, sizeof(char), size, fp);
	
	fclose(fp);
	
	return array;
}
