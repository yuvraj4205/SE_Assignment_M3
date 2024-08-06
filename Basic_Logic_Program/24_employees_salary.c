//Accept 1 employee's name and salary and count average and total salary

#include<stdio.h>
main()
{
	float salary,average,total_salary;
	int count=1;
	char name[50];
	
	printf("Enter employee's name : ");
	scanf("%d",&name);
	
	printf("Enter employee's salary : ");
	scanf("%f",&salary);
	
	total_salary=salary;
	average=total_salary/count;
	
	printf("\nEmployee name : %c",name);
	printf("\nEmployee salary : %f",salary);
	printf("\nAverage of salary : %f",average);
	printf("\nTotal salary : %f",total_salary);
}
