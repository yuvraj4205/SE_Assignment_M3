/*WAP to show
i. Monday to Sunday using switch case */

#include<stdio.h>
main()
{
	int day;
	
	printf("Enter day number (1-7): ");
    scanf("%d",&day);
	printf("\n");
	
	switch(day)
	{
		case 1:
			printf("Monday.");
			break;
		case 2:
			printf("Tuesday.");
			break;
		case 3:
			printf("Wednesday.");
			break;
		case 4:
			printf("Thursday.");
			break;
		case 5:
			printf("Friday.");
			break;
		case 6:
			printf("Saturday.");
			break;
		case 7:
			printf("Sunday.");
			break;
		default:
			printf("Please enter valid number.");
			break;
	}
}
