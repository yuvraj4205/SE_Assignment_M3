//WAP to check whether a number is negative, positive or zero.

#include<stdio.h>
main()
{
	int a;
	
	printf("Enter the value of a : ");
	scanf("%d",&a);
	
	if(a>0)
		printf("Value is positive.");
	else if(a<0)
		printf("Value is negative.");
	else
		printf("Value is zero.");
}
