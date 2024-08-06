//WAP to find the largest of three numbers.

#include<stdio.h>
main()
{
	int n1,n2,n3;
	
	printf("Enter number one : ");
	scanf("%d",&n1);
	printf("Enter number two : ");
	scanf("%d",&n2);
	printf("Enter number three : ");
	scanf("%d",&n3);
	
	if(n1>n2 && n1>n3)
		printf("\n'%d' is the largest number.",n1);
	else if(n2>n3 && n2>n1)
		printf("\n'%d' is the largest number.",n2);
	else if(n3>n2 && n3>n1)
		printf("\n'%d' is the largest number.",n3);
	else
		printf("\nNo number is the largest number among them.");
}
