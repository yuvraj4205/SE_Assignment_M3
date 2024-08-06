/*Accept 3 numbers from user using while loop and check each numbers
palindrome */

#include<stdio.h>
main()
{
	int num,i,rem,n=0;
	
	printf("Enter a number to find it is palindrome or not : ");
	scanf("%d",&num);
	
	i=num;
	
	while(i>0)
	{
		rem=i%10;
		printf("\n%d",rem);
		n=n*10+rem;
		i/=10;
	}
	printf("\n\nReversed number = %d\n",n);
	
	if(num==n)
	{
		printf("\n%d is the palindrome number.",num);
	}
	else
	{
		printf("\n%d is not the palindrome number.",num);
	}
}
