//WAP Find out length of string without using inbuilt function

#include <stdio.h>

int calculate_length(char *str) 
{
    int length=0;
    while(*str!='\0')
	{
        length++;
        str++;
    }
    return length;
}

int main() {
    char input_str[100];
    printf("Enter a string : ");
    fgets(input_str,sizeof(input_str),stdin);

    input_str[strchr(input_str,'\n')-input_str]='\0';

    printf("\nLength of the string : %d",calculate_length(input_str));
}
