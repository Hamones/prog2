#include <stdio.h>

int main(){
	int buffer[10];
	FILE *file = fopen ("input.txt", "rb");
	fread(buffer, sizeof(int), 10, file);
	fclose(file);
	return 0;
}

