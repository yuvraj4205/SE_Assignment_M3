//Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)

#include<stdio.h>
main()
{
	long int num;
    int max=0,digit;

    printf("Enter a number : ");
    scanf("%ld",&num);
    
    if (num < 0)
	{
        printf("\nError : Negative number.");
    }
    
    while(num>0)
	{
        digit=num%10;
        if(digit>max)
		{
            max=digit;
        }
        num/=10;
    }
    printf("\nThe maximum digit is : %d",max);
}
