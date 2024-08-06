//Write a program in C to find the maximum number of characters in a string.

#include <stdio.h>
#include <string.h>
main()
{
    char str[100];
    int max=0,len;

    printf("Enter a string : ");
    fgets(str,sizeof(str),stdin);

    len=strlen(str);
    
    int i;
    for(i=0;i<len;i++)
	{
        if(str[i]!=' ' && str[i]!='\n')
		{            
			int j,count=0;
            for(j=i;j<len;j++)
			{
                if(str[j]==str[i]) 
                    count++;
            }
            if(count>max)
                max=count;
        }
    }
    printf("\nMaximum number of characters in a string : %d",max);
}
