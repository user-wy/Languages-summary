#include <stdio.h>

int main(int argc, const char *argv[])
{
	char read_buf;

	FILE  *file = NULL;

	// open a file 
	file = fopen( "test.txt", "r" );
	
	// read file line by line
	while(EOF != ( read_buf = fgetc( file ) ))
		printf("%c", read_buf);

	fclose(file);

	return 0;
}
