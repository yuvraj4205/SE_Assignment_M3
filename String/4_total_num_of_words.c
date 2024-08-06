//Write a program in C to count the total number of words in a string.

#include<stdio.h>
main()
{
	char str[100];
	int count=0,i;
	
	printf("Enter a sentence : ");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
        if(str[i]==' ' && str[i+1]!=' ')
		{
        count++;
        }
    }
    printf("\n\nNumber of words in the string : %d",count+1);
}
