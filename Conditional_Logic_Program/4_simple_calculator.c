/*WAP to make simple calculator (operation include Addition, Subtraction,
Multiplication, Division, modulo) using conditional statement */

#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("Enter number 1 : ");
	scanf("%d",&a);
	
	printf("Enter number 2 : ");
	scanf("%d",&b);
	
	printf("\n-----------Arithmetic Operations-------------");
	printf("\n1. Addition");
	printf("\n2. Subtraction");
	printf("\n3. Multiplication");
	printf("\n4. Division");
	printf("\n---------------------------------------------");
	
	printf("\n\nSelect the operation to perform : ");
	scanf("%d",&c);
	
	if(c==1)
		printf("\nAddition = %d",a+b);
	else if(c==2)
		printf("\nSubtraction = %d",a-b);
	else if(c==3)
		printf("\nMultiplication = %d",a*b);
	else if(c==4)
		printf("\nDivision = %d",a/b);
	else
		printf("\nInvalid choice.. Try again!!!");
}
