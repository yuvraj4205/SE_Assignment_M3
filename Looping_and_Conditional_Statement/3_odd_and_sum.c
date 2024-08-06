/*WAP to take 10 no. Input from user find out below values
b. How many odd numbers are there 
d. Sum of odd numbers */

#include<stdio.h>
main()
{
	int i=0,o=0,a,sum=0;
	
	while(i<10)
	{
		printf("Enter a number : ");
		scanf("%d",&a);
		
		if(a%2!=0)
		{
			sum+=a;
			o++;
		}
		i++;
	}
	printf("\nOdd numbers from enetered numbers are : %d",o);
	printf("\nSum of odd numbers : %d",sum);
}
