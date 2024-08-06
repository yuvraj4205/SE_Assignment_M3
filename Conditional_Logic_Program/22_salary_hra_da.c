/*Write a C program to input basic salary of an employee and calculateits
Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95% */

#include<stdio.h>
main()
{
    float salary,gross;
    float hra,da;

    printf("Enter Basic Salary: ");
    scanf("%f", &salary);

    if (salary <= 10000) {
        hra=0.2*salary;
        da=0.8*salary;
    } else if(salary<=20000) {
        hra=0.25*salary;
        da=0.9*salary;
    } else {
        hra=0.3*salary;
        da=0.95*salary;
    }

    gross=salary+hra+da;

    printf("Gross Salary: %.2f\n",gross);
}
