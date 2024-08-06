//1 + 2 + 3 + 4 + 5 + ... + n

#include<stdio.h>
main()
{
	int i=0,n,sum=0;
	
	printf("Enter a number to find sum from 0 to n number : ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		sum+=i;
		i++;
	}
	printf("\nSum of number 0 to n number = %d",sum);
}
