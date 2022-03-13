#include <stdio.h>

#define debug
#define pi 3.1415926

int main(int argc, const char *argv[])
{
	float result = 0;
	int semidiameter = 0;

	// input the semidiameter of a circle
	printf("Please input a semidiameter of a circle:\n");
	scanf(" %d", &semidiameter);
	// calculate the result
	result = pi * semidiameter * semidiameter;

#ifdef debug
	printf("\tdebug info\n");
#endif

	// print the result to console
	printf("The result is : %f\n", result);

	

	return 0;
}
