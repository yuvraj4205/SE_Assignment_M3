/*Write a program in C to read a sentence and replace lowercase characters with
uppercase and vice versa.*/

#include <stdio.h>
main()
{
    char sentence[100];
    int i;

    printf("Enter a sentence : ");
    fgets(sentence,sizeof(sentence),stdin);

    for(i=0;sentence[i];i++)
	{
        if(sentence[i]>='a' && sentence[i]<='z')
        {
            sentence[i]=sentence[i]-32;
        }
        else if(sentence[i]>='A' && sentence[i]<='Z')
        {
			sentence[i]=sentence[i]+32;
		}
    }
    printf("\nModified sentence: %s",sentence);
}
