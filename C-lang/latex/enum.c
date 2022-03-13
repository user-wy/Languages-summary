#include <stdio.h>

int main(int argc, const char *argv[])
{
	enum week { Monday,
				Tuesday,
				Wednesday,
				Thursday,
				Friday,
				Saturday,
				Sunday };

	enum week day;

	printf("Please input a day:\n");

	scanf("%d", &day );
	switch(day)
	{
		case Monday:
			printf("Today is Monday\n");
			break;
			
		case Tuesday:
			printf("Today is Tuesday\n");
			break;

		case Wednesday:
			printf("Today is Wednesday\n");
			break;

		case Thursday:
			printf("Today is Thursday\n");
			break;

		case Friday:
			printf("Today is Friday\n");
			break;

		case Saturday:
			printf("Today is Saturday\n");
			break;

		case Sunday:
			printf("Today is Sunday\n");
			break;

		default:
			printf("Input Error!\n");
			break;
	}
				

	return 0;
}
