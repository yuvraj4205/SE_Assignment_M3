//WAP to print number in reverse order e.g.: number = 64728 ---> reverse =82746

#include<stdio.h>
main()
{
	int n,rem;
	
	printf("Enter a number to make sum of it's digits : ");
	scanf("%d",&n);
	printf("\n");
	
	while(n>0)
	{
		rem=n%10;
		printf("%d",rem);
		n/=10;
	}
}
