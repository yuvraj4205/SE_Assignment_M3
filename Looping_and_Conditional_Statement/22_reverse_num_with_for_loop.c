//C Program to Reverse a Number Using FOR Loop

#include<stdio.h>
main()
{
	int n,rem;
	
	printf("Enter a number : ");
	scanf("%d",&n);
	printf("\n");
	
	for(rem=1;n>0;n/=10)
	{
		rem=n%10;
		printf("%d",rem);
	}
}
