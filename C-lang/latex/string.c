#include <stdio.h>
#include <string.h>

int strcopy( char str1[], char str2[] );

int main(int argc, const char *argv[])
{
	/*
	 * 	#include <string.h>	
	 * char *strcpy(char *dest, const char *src);
	 *
	 */

	char str1[10] = "who are u?";
	char str2[8] = "nick";
	char str3[8] = "tom";

	printf("The string before:\n");
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", str3);


	strcpy( str3, str2 );
	printf("The string after with system function:\n");
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", str3);
	
	strcopy( str1, str2 );
	printf("The string after with system function:\n");
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", str3);
	

	return 0;
}

int strcopy( char str1[], char str2[] )
{
	int index = 0;

	while( str2[index] != '\0' )
	{
		str1[index] = str2[index];
		index++;
	}

	while( str1[index] != '\0' )
	{
		str1[index] = NULL;
		index++;
	}

	return 0;
}
