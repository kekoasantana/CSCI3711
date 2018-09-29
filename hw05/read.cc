#include "read.h"

unsigned char* read(const char* file, char* ppmIndicator, int* width, int* height, int* maximum) {
	FILE* fp = fopen(file, "rb");
	
	fscanf(fp, "%s", ppmIndicator);
	
	fscanf(fp, "%d %d", width, height);
	
	fscanf(fp, "%d\n", maximum);
	
	int size = *width * *height * 3;
	
	unsigned char* bytes = new unsigned char[size];
	fread(bytes, sizeof(char), size, fp);
	
	int** array = new int*[height];
	
	*array = new int[*width**height];
	
	for(int i = 0; i<*height; i++) {
		array[i] = array[i-1] + width;
	}
	
	unsigned char* array = (unsigned char*)(&bytes);
	
	fclose(fp);
	
	return bytes;
}
