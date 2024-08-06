//Calculate person’s Annual salary

#include<stdio.h>
main()
{
	float monthly_salary;
	float annual_salary;
	
	printf("Enter your monthly salary : ");
	scanf("%f",&monthly_salary);
	
	annual_salary=monthly_salary*12;
	
	printf("Annual salary is %.2f.",annual_salary);
}

