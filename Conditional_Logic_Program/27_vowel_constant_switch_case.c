/*WAP to show
ii. Vowel or Consonant using switch case */

#include<stdio.h>
main()
{
	char c;
	
	printf("Enter a character to : ");
	scanf("%c",&c);
	switch(c)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			printf("\nIt is a vowel.",c);
			break;
		default:
			printf("\nIt is a consonant.",c);
			break;
	}
}
