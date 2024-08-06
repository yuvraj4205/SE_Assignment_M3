//Write a program in C to find the largest and smallest words in a string.

#include <stdio.h>
#include <string.h>
main()
{
    char str[100];
    printf("Enter a string : ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]=0;

    char *largest_word=NULL;
    char *smallest_word=NULL;
    int largest_len=0;
    int smallest_len=100;
    char *word=str;

    while(*word){
        int word_len=0;
        while(*word!=' ' && *word!='\0')
		{
            word_len++;
            word++;
        }
        if(word_len>largest_len)
		{
            largest_len=word_len;
            largest_word=word-word_len;
        }
        if(word_len<smallest_len)
		{
            smallest_len=word_len;
            smallest_word=word-word_len;
        }
        if(*word==' ')
            word++;
    }
    printf("\nLargest word: %.*s",largest_len,largest_word);
    printf("\nSmallest word: %.*s",smallest_len,smallest_word);
}
