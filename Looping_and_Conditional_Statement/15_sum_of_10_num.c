//Calculate sum of 10 numbers using of while loop

#include<stdio.h>
main()
{
	int i,a,sum=0;
	i=1;
	
	while(i<=10)
	{
		printf("Enter number : ");
		scanf("%d",&a);
		
		sum=sum+i;
		i++;
	}
	printf("Sum of 10 entered numbers : %d",sum);
}
