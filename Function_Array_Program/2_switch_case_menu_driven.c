/*WAP of Addition, Subtraction, Multiplication and Division using Switch
case.(Must Be Menu Driven)*/

#include<stdio.h>
main()
{
	int n1,n2,choice;
	
	printf("Enter first number : ");
	scanf("%d",&n1);
	printf("Enter second number : ");
	scanf("%d",&n2);
		
	printf("\n-----------Arithmetic Operations-------------");
	printf("\n\n1. Addition");
	printf("\n\n2. Subtraction");
	printf("\n\n3. Multiplication");
	printf("\n\n4. Division");
	printf("\n\n------------------------------------------------");
		
	printf("\n\nSelect the operation to perform : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1: printf("\nAddition = %d",n1+n2);
				break;
				
		case 2: printf("\nSubtraction = %d",n1-n2);
				break;
			
		case 3: printf("\nMultiplication = %d",n1*n2);
				break;
				
		case 4: printf("\nDivision = %d",n1/n2);
				break;
					
		default :
				printf("\nInvalid choice.. Try again!!!");
				break;
	}
}
