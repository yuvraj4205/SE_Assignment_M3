/*Write a program in C to count the total number of alphabets, digits and special
characters in a string.*/

#include <stdio.h>
#include <ctype.h>
main()
{
    char str[100];
    int i;
    int alphabets = 0, digits = 0, specialChars = 0;

    printf("Enter a string : ");
    fgets(str,sizeof(str),stdin);
    
    for(i=0;str[i]!='\0';i++)
	{
        if(isalpha(str[i]))
            alphabets++;
        else if(isdigit(str[i]))
            digits++;
        else if(!isspace(str[i]))
            specialChars++;
    }
    printf("\nTotal number of alphabets : %d",alphabets);
    printf("\nTotal number of digits : %d",digits);
    printf("\nTotal number of special characters : %d",specialChars);
}
