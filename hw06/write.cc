#include "write.h"

void writeJPEG(const char* file, int width, int height, int quality, unsigned char* array) {
	
	struct jpeg_compress_struct cinfo;
	
	struct jpeg_error_mgr jerr;
	
	FILE* fp = fopen(file, "wb");
	JSAMPROW row_pointer[1];
	int row_stride;
	
	// set up error handling and initialize JPEG compression object
	cinfo.err = jpeg_std_error(&jerr);
	jpeg_create_compress(&cinfo);
	
	// specify data destination

	jpeg_stdio_dest(&cinfo, fp);
	
	cinfo.image_width = width;
	cinfo.image_height = height;
	cinfo.input_components = 3;
	cinfo.in_color_space = JCS_RGB;
	
	jpeg_set_defaults(&cinfo);
	jpeg_set_quality(&cinfo, quality, TRUE);
	jpeg_start_compress(&cinfo, TRUE);
	
	row_stride = width * 3;
	
	while (cinfo.next_scanline < cinfo.image_height) {
		row_pointer[0] = &array[cinfo.next_scanline * row_stride];
		(void) jpeg_write_scanlines(&cinfo, row_pointer, 1);
	}
	
	// finish compression
	jpeg_finish_compress(&cinfo);
	fclose(fp);
	
	jpeg_destroy_compress(&cinfo);
	
}






