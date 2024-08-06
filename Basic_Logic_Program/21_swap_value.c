/*Accept 2 numbers from user and swap 2 numbers with using 3rd variable
and without using 3rd variable*/

#include<stdio.h>
main()
{
	int a,b;
	
	printf("Enter number one : ");
	scanf("%d",&a);
	
	printf("Enter number two : ");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\n---swapped value---\n");
	printf("\nNumber one : %d",a);
	printf("\nNumber two : %d",b);
}
