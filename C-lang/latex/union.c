#include <stdio.h>

int main(int argc, const char *argv[])
{

	union Data{
		int addr;
		char var;
	};

	union Data data;
	printf("Please input a char to save:\n");

	scanf(" %c", &data.var);

	printf("Data is : %c\n", data.var);

	return 0;
}
