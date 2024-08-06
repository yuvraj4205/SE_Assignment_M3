/*WAP to accept the height of a person in centimeters and categorize the
person according to their height.*/

#include<stdio.h>
main()
{
	float h;
	
	printf("Enter the height in centimeters : ");
	scanf("%f",&h);
	
	if(h<150.0)
		printf("\nPerson is short.");
	else if(h>=150.0 && h<=165.0)
		printf("\nPerson is average.");
	else if(h>=165.0 && h<=180.0)
		printf("\nPerson is tall.");
	else
		printf("\nPerson is very tall.");
}
