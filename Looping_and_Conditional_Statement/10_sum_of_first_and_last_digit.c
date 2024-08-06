/*Write a program you have to make a summation of first and last Digit. (E.g.,
1234 Ans: -5) */

#include<stdio.h>
main()
{
	int n,first_digit,last_digit,sum;
	
	printf("Enter a number to make sum of it's first and last digit : ");
	scanf("%d",&n);
	printf("\n");
	
	last_digit=n%10;
	
	while(n>=10)
	{
		n/=10;
	}
	
	first_digit=n;
	sum=n+last_digit;
	
	printf("\n\nSum of first and last digit : %d",sum);
}
