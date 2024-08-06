//WAP to print factorial of given number

#include<stdio.h>
main()
{
	int i=1,n;
	int f=1;
	
	printf("Enter a number for finding it's factorial : ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		f*=i;
		i++;
	}
	printf("Factorial of %d is %d.",n,f);
}
