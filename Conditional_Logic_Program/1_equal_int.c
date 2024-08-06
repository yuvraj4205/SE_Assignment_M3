/*Write a C program to accept two integers and check whether they are equal
or not */

#include<stdio.h>
main()
{
	int a,b;
	
	printf("Enter number one : ");
	scanf("%d",&a);
	printf("Enter number two : ");
	scanf("%d",&b);
	
	if(a==b)
		printf("\nNumber's are equal.");
	else
		printf("\nNumber's are not equal.");
}
