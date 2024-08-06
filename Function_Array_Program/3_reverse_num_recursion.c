//WAP to find reverse of string using recursion

#include <stdio.h>
#include <string.h>

void reverseString(char *str, int start, int end);

main()
{
    char str[100];
    int length;

    printf("Enter a string : ");
    fgets(str,sizeof(str),stdin);

    str[strcspn(str,"\n")]='\0';
    length=strlen(str);
    rev_str(str,0,length-1);

    printf("\nReversed string : %s",str);
}

void rev_str(char *str,int start,int end) 
{
    if(start>=end)
        return;
    
	char temp;
    temp=str[start];
    str[start]=str[end];
    str[end]=temp;

    rev_str(str,start+1,end-1);
}
