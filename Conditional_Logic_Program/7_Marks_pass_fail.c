//Accept marks from user and check pass or fail

#include<stdio.h>
main()
{
	int a;
	
	printf("Enter the value of a : ");
	scanf("%d",&a);
	
	if(a>=33)
		printf("Result = pass.");
	else
		printf("Result = fail.");
}
