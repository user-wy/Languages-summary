#include <stdio.h>

int main(int argc, const char *argv[])
{
	enum sex{
		male,
		female
	};

	struct student{
		int stu_nu;
		enum sex stu_sex;
		char stu_name[10];
	};

	struct student student_wy;

	printf("Please input student number:\n");
	scanf(" %d", &student_wy.stu_nu);

	printf("Please input student sex:\n");
	scanf(" %d", &student_wy.stu_sex);

	printf("Please input student name\n");
	scanf(" %s", student_wy.stu_name);

	printf("\n********************Student infor***************************\n");
	printf("Student name: %s \nStudent number: %d \nStudent sex:",
							student_wy.stu_name, student_wy.stu_nu);


	if( student_wy.stu_sex == male )
		printf("male\n");
	else
		printf("female\n");

	return 0;
}
