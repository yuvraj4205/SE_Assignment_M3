//Write a program in C to combine two strings manually

#include <stdio.h>
main()
{
    char str1[]="Hello, ";
    char str2[]="World!";
    char result[100];
    int i,j;

    for(i=0;str1[i]!='\0';i++)
	{
        result[i]=str1[i];
    }
    for(j=0;str2[j]!='\0';j++)
	{
        result[i+j]=str2[j];
    }
    result[i+j]='\0';

    printf("\nCombined string : %s",result);
}
