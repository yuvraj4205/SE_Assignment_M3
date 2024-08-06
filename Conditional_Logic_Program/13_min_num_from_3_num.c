//WAP to find minimum number among 3 numbers using ternary operator

#include<stdio.h>
main()
{
	int a,b,c,min;
	
	printf("Enter number 1 : ");
	scanf("%d",&a);
	printf("Enter number 2 : ");
	scanf("%d",&b);
	printf("Enter number 3 : ");
	scanf("%d",&c);
	
	min=a<b?(a<c?a:c):(b<c?b:c);
	
	printf("\nMinimum number from all 3 numbers is %d.",min);
}
