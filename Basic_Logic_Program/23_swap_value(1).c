//WAP to calculate swap 2 numbers with using of multiplication and division.

#include<stdio.h>
main()
{
	int a,b;
	
	printf("Enter number one : ");
	scanf("%d",&a);
	
	printf("Enter number two : ");
	scanf("%d",&b);
	
	a=a*b;
	b=a/b;
	a=a/b;
		
	printf("\nswapped value for a=%d and b=%d",a,b);
}
