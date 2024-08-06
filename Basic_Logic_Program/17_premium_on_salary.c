//Calculate person’s insurance premium based on salary

#include<stdio.h>
main()
{
	double salary,insurance,premium;
	
	printf("Enter your salary : ");
	scanf("%lf",&salary);
	
	premium=0.05;
	insurance=salary*premium;
	
	printf("\nInsurance premium based on your salary : %.2lf",insurance);	
}
