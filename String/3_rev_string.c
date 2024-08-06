//Write a program in C to print individual characters of a string in reverse order

#include <stdio.h>
#include <string.h>
main()
{
    char str[100];
    
	printf("Enter a string : ");
    fgets(str,sizeof(str),stdin);
    
	str[strlen(str)-1]='\0';

    int length=strlen(str);
    printf("\nCharacters in reverse order : ");
    
    int i;
	for(i=length-1;i>=0;i--)
	{
	    printf("%c ", str[i]);
    }
}
