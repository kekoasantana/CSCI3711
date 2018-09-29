#include "write.h"

void write(const char* file, char* ppmIndicator, int width, int height, int max, unsigned char* array) {
	FILE* fp = fopen(file, "wb");
	
	fprintf(fp, "%s\n", ppmIndicator);
	fprintf(fp, "%d\n%d\n", width, height);
	fprintf(fp, "%d\n", max);
	
	int size = width * height * 3;
	
	fwrite(array, sizeof(char), size, fp);
	
	fclose(fp);
}