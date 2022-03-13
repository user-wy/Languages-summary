#include <stdio.h>

int main(int argc, const char *argv[])
{

	int int_array[10];
	
	for(int i=0; i < 10; i++)
		int_array[i] = i;

	for(int i=0; i < 10; i++)
		printf("array[%d] = %d\n", i, int_array[i]);

	return 0;
}
