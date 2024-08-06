//Write a program make a summation of given number (E.g., 1523 Ans: -11)

#include<stdio.h>
main()
{
	int n,rem,sum;
	
	printf("Enter a number to make sum of it's digits : ");
	scanf("%d",&n);
	printf("\n");
	
	while(n>0)
	{
		rem=n%10;
		printf("%d",rem);
		n/=10;
		sum+=rem;
	}
	printf("\n");
	printf("\nsum of entered digits : %d",sum);
}
