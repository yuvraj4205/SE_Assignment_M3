//WAP to print Fibonacci series up to given numbers

#include<stdio.h>
main()
{
	int i,a=0,b=1,c,n;
	
	printf("Enter a number to print Fibonancci Series : ");
	scanf("%d",&n);
	
	printf("\n%d %d", a, b);
	
	i=1;
	while(i<=n)
	{
		c=a+b;
		printf(" %d",c);
		a=b;
		b=c;
		i++;
	}	
}
