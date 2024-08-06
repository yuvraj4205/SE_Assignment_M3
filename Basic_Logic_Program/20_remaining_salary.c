/*Accept monthly salary from the user and deduct 10% insurance premium,
10% loan installment find out of remaining salary.*/

#include<stdio.h>
main()
{
	float salary,insurance,installment,remaining_salary;
	
	printf("Enter the monthly salary : ");
	scanf("%f",&salary);
	
	insurance=0.1*salary;
	
	remaining_salary=salary-insurance;
	
	installment=0.1*remaining_salary;
	
	remaining_salary=remaining_salary-installment;
	
	printf("\nRemaining salary is after deducting insurance premium and loan installment is %.2f.",remaining_salary);
}
