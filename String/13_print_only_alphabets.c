//Write a program in C to remove characters from a string except alphabets.

#include <stdio.h>
main()
{
    char str[100];
    int i,j=0;

    printf("Enter a string : ");
    fgets(str,sizeof(str),stdin);

    for(i=0;str[i];i++)
	{
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
		{
            str[j++]=str[i];
        }
    }
    str[j]='\0';
    printf("\nString after removing non-alphabet characters : %s",str);
}
