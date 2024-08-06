//Accept 5 expense from user and find average of expense

#include<stdio.h>
main()
{
	float a,b,c,d,e;
	float total,average;
	
	printf("Enter expense one : ");
	scanf("%f",&a);
	printf("Enter expense two : ");
	scanf("%f",&b);
	printf("Enter expense three : ");
	scanf("%f",&c);
	printf("Enter expense four : ");
	scanf("%f",&d);
	printf("Enter expense five : ");
	scanf("%f",&e);
	
	total=a+b+c+d+e;
	
	average=total/5.0;
	
	printf("\nAverage of all expenses : %.2f",average);
}
