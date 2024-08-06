//Calculate the Sum of Natural Numbers Using the While Loop

#include<stdio.h>
main()
{
	int i=1,a,sum=0;
	
	while(i<=5)
	{
		printf("Enter number : ");
		scanf("%d",&a);
		
		sum=sum+i;
		i++;
	}
	printf("Sum of entered number : %d",sum);
}
