//WAP to accept 5 numbers from user and display all numbers

#include<stdio.h>
main()
{
	int i,a;
	i=1;
	
	while(i<=5)
	{
		printf("Enter a number : ");
		scanf("\n%d",&a);
		
		printf("\n%d\n\n",a);
		i++;
	}
}
