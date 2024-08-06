//WAP to print table up to given numbers

#include<stdio.h>
main()
{
	int i,a;
	i=1;
	
	printf("Enter a number to print a table : ");
	scanf("%d",&a);
	
	while(i<=10)
	{
		printf("\n%d * %d = %d",a,i,a*i);
		i++;
	}
}
