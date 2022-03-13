#include <stdio.h>

int main(int argc, const char *argv[])
{

	int integer = 4;
	int *int_pointer = &integer; 
	// equal to : int *int_pointer;     int_pointer = &integer;

	printf("integer = %d\n", integer);
	printf("int_pointer = 0x%x\n", int_pointer);
	printf("*int_pointer = %d\n", *int_pointer);

	return 0;
}
