//WAP to perform Palindrome number using for loop and function

#include <stdio.h>

int palindrome(int);
main() 
{
    int num;
    
    printf("Enter a number: ");
    scanf("%d",&num);

    if(palindrome(num))
        printf("\n%d is a palindrome number.", num);
    else
        printf("\n%d is not a palindrome number.", num);
        
    palindrome(num);
}

int palindrome(int num)
{
    int reversed = 0;
    int original = num;
    int n,digit;

    for(n=num;n!=0;n/=10)
	{
        digit=n%10;
        reversed=reversed*10+digit;
    }
    
    return original==reversed;
}
