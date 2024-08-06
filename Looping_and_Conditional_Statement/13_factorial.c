//calculate the Factorial of a Given Number using while loop

#include<stdio.h>
main()
{
	int i=1;
	int a;
	int n=1;
	
	printf("Enter a number for finding it's factorial : ");
	scanf("%d",&a);
	
	while(i<=a)
	{
		n=n*i;
		i++;
	}
	printf("factorial of %d is %d.",a,n);
}
