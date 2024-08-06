//Accept 2 numbers and find out its sum check it size

#include<stdio.h>
main()
{
	int a,b,sum;
	
	printf("Enter number one : ");
	scanf("%d",&a);
	
	printf("Enter number two : ");
	scanf("%d",&b);
	
	sum=a+b;
	
	printf("\nsum of 2 numbers : %d",sum);
	printf("\n\nsum into bytes : %d",sizeof(sum));
}
