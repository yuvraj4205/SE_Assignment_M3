/*WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
c. Sum of even numbers */

#include<stdio.h>
main()
{
	int i=0,e=0,a,sum=0;
		
	while(i<10)
	{
		printf("Enter a number : ");
		scanf("%d",&a);
		
		if(a%2==0)
		{
			sum+=a;
			e++;
		}
		i++;
	}
	printf("\nEven numbers from entered numbers are : %d",e);
	printf("\nSum of entered even numbers : %d",sum);
}
