//WAP to find factorial using recursion

#include<stdio.h>
main()
{
	int num,f;
	
	printf("Enter a number to print factorial : ");
	scanf("%d",&num);
	
	f=factorial(num);
	printf("\nFactorial : %d", f);
}

int factorial(int num)
{
	if(num==0)
		return 1;
	
	else
		return num*(factorial(num-1));
}
