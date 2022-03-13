#include <stdio.h>

int swap( int a, int b );
int swap_p( int *a, int *b);

int main(int argc, const char *argv[])
{

	int a = 1;
	int b = 3;
	int *a_p = &a;
	int *b_p = &b;

	printf("\tInit value\n");
	printf("a = %d, b = %d\n", a, b);

	// use swap function to swap two parameters
	swap( a, b );
	printf("\tswap value\n");
	printf("a = %d, b = %d\n", a, b);

	// use swap_p function to swap two parameters
	swap_p( a_p, b_p );
	printf("\tswap_p value\n");
	printf("a = %d, b = %d\n", a, b);
	

	return 0;
}

int swap( int a, int b )
{
	int mid = 0;

	mid = a;
	a = b;
	b = mid;

	return 0;
}

int swap_p( int *a, int *b)
{
	int mid = 0;

	mid = *a;
	*a = *b;
	*b = mid;

	return 0;
}
