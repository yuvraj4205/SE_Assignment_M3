/*C Program to Check Uppercase or Lowercase or Digit or Special
Character */

#include<stdio.h>
main()
{
	char ch;
	
	printf("Enter a character : ");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z')
		printf("\n'%c' is a Uppercase.",ch);
	else if(ch>='a' && ch<='z')
		printf("\n'%c' is a Lowercase.",ch);
	else if(ch>='0' && ch<='9')
		printf("\n'%c' is a Digit.",ch);
	else
		printf("\n'%c' is a Special character.",ch);
}
