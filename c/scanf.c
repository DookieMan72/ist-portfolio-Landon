#include <stdio.h> 
int main()
{	
	int age;
	float gpa;
	char grade;

	printf( "What is your age?" );
	scanf("%i", &age);
	printf( "What is your gpa?" );
	scanf( "%f", &gpa);
	printf( "What is your letter grade?" );
	scanf (" %c", &grade);
	printf( "Your age is %i, Your gpa is %.1f, Your grade is %c", age, gpa, grade);

	return 0;

}	
