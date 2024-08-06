#include<stdio.h>
main()
{
	char choice;
	
	printf("Enter any character : ");
	scanf("%c",&choice);
	
	switch(choice)
	{
		case 'a' : 
		case 'e' : 
		case 'i' : 
		case 'o' : 
		case 'u' : 
		case 'A' : 
		case 'E' : 
		case 'I' : 
		case 'O' : 
		case 'U' :printf("vowel.");
				break;
		
			default : printf("consonant.");
	}
}
