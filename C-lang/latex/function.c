#include <stdio.h>

int my_function1( int parameters );

int my_function2( int parameters )
{
	printf("The parameters you have convert to is : %d\n", parameters);

	return 0;
}


int main(int argc, const char *argv[])
{

	int test = 5;

	test = my_function1( test );
	my_function2( test );
	

	return 0;
}

int my_function1( int parameters )
{
	printf("The parameters you have convert to is : %d\n", parameters);

	return 0;
}
