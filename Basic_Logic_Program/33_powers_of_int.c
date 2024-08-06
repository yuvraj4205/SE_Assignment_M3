//C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)

#include<stdio.h>
main()
{
	int num,n1,n2,n3;
	
	printf("Enter an integer : ");
	scanf("%d",&num);
	
	n1=num;
	n2=num*num;
	n3=num*num*num;
	
	printf("\nfirst power : %d",n1);
	printf("\nsecond power : %d",n2);
	printf("\nthird power : %d",n3);
}
