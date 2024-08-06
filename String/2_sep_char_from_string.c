//Write a program in C to separate individual characters from a string.

#include <stdio.h>
#include <string.h>
main()
{
    char str[100];
    int i;
    
    printf("Enter a string : ");
    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1]='\0';

    printf("\nIndividual characters : ");
    for(i=0;i<strlen(str);i++)
	{
        printf("%c ",str[i]);
    }
}
