#include <stdio.h>

int main(int argc, const char *argv[])
{

	int test = 3;

	switch(test)
	{
		case 1:
			printf("test1 = %d\n", test);
			break;

		case 2:
			printf("test2 = %d\n", test);
			break;

		case 3:
			printf("test3 = %d\n", test);
			break;

		default:
			printf("test\n");
	}

	return 0;
}
