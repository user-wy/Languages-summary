#include <stdio.h>
#include "sum.h"

int main(int argc, const char *argv[])
{

	int a = 1;
	int b = 2;
	int result = 0;

	
	printf("result = %d\n", result);
	result = sum( a, b );
	printf("result = %d\n", result);

	return 0;
}
