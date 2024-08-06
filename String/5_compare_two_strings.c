//Write a program in C to compare two strings without using string library functions.

#include <stdio.h>

int compare_strings(char *str1, char *str2)
{
    while(*str1 && (*str1==*str2))
	{
        str1++;
        str2++;
    }
    return *str1-*str2;
}

main()
{
    char str1[100],str2[100];
    int result;

    printf("Enter first string : ");
    scanf("%s",str1);

    printf("Enter second string : ");
    scanf("%s",str2);

    result=compare_strings(str1,str2);

    if(result<0)
        printf("\n%s is less than %s.",str1,str2);
	else if(result>0)
        printf("\n%s is greater than %s.",str1,str2);
	else
        printf("\n%s is equal to %s.",str1,str2);
}
