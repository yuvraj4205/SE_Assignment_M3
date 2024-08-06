//Write a program in C to extract a substring from a given string

#include<stdio.h>
#include<string.h>
main()
{
	char *str="Hello, World!";
    int start=7;
    int end=12;
    char substr[20];

    if(start<0 || end>strlen(str) || start>end)
	{
        printf("\nInvalid start or end index.");
        return 1;
    }

    strncpy(substr,str+start,end-start+1);
    substr[end-start+1]='\0';

    printf("\nOriginal String : %s",str);
    printf("\nExtracted Substring : %s",substr);
}
