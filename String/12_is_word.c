/*Write a program in C to find the number of times a given word 'is' appears in
the given string.*/

#include <stdio.h>
main()
{
    char str[100];
    char word[]="is";
    int count=0;
    int i,j,k;

    printf("Enter a string : ");
    fgets(str,sizeof(str),stdin);
    
    for(i=0;str[i]!='\0';i++)
	{
        if(str[i]=='\n')
		{
            str[i]='\0';
        }
    }
    for(i=0;str[i]!='\0';i++)
	{
        if(str[i]>='A' && str[i]<='Z')
		{
            str[i]=str[i]+32;
        }
    }
    for(i=0;str[i]!='\0';i++)
	{
        if(str[i]==word[0])
		{
            k=0;
            for(j=i;j<i+2;j++)
			{
                if(str[j]==word[k])
                {
                    k++;
                }
                else
                {
				}
            }
            if(k==2)
                count++;
        }
    }
    printf("\nThe word 'is' appears %d times in the given string.",count);
}
