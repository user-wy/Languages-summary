#include <stdio.h>	

int main(int argc, const char *argv[])
{
	/*	#include <stdio.h>
	 *	
	 *	int scanf(const char *format, ...);
	 */	

	int var = 0;

	printf("Please input a integer:\n");
	
	scanf("%d", &var);
	printf("var = %d\n", var);

	return 0;
}
