//Write a program in C to copy one string to another string.

#include<stdio.h>
main()
{
	char str1[50], str2[50];
	int i;
	
	printf("Enter a string : ");
	gets(str1);
	
	for(i=0;str1[i]!='\0';i++)
	{
		str2[i]=str1[i];
	}
	str2[i]='\0';
	printf("\nAfter copying string into another string : %s",str2);
}
