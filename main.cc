#include <cstdio>

int main(int argc, char** argv) {
	FILE* fp = fopen("increment.txt", "w");
	
	int x = 0;
	
	fprintf(fp, "%d", x);
	
	fclose(fp);
	
	FILE* o = fopen("increment.txt", "r");
	
	
	while(fscanf(o, "%d", &x) !=EOF) {
		x += 1;
		printf("%d", x);
	}
	fclose(o);
}