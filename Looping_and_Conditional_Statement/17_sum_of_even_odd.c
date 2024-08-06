/*Calculate 5 numbers from user and calculate number of even and odd using
of while loop*/

#include<stdio.h>
main()
{
	int i;
	int a=0,b=0;
	int sum=0;
	
	while(sum<5)
	{
		printf("Enter a number : ");
		scanf("%d",&i);
			
		if(i%2==0)
		{
			printf("\nNumber is even.\n\n");
			a+=i;
		}
		else
		{
			printf("\nNumber is odd.\n\n");
			b+=i;
		}
		sum++;
	}
	printf("\nsum of even numbers : %d",a);
	printf("\nsum of odd numbers : %d",b);
}
