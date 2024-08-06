//Write a program in C to count the total number of vowels or consonants in a string.

#include <stdio.h>
#include <ctype.h>

void count(char str[])
{
    int i,vowels=0,consonants=0;
    char c;
    
    for(i=0;str[i];i++)
	{
        if (isalpha(str[i])) 
		{
            c=tolower(str[i]);
            
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
                vowels++;
            else
                consonants++;
        }
    }
    printf("\nVowels : %d",vowels);
    printf("\nConsonants : %d",consonants);
}

main()
{
    char str[100];

    printf("Enter a string : ");
    fgets(str,sizeof(str),stdin);

    count(str);
}
