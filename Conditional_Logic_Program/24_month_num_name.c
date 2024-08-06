//Accept month number and display month name

#include<stdio.h>
main()
{
	int month;
	
	printf("Number of month (1-12) : ");
	scanf("%d",&month);
	
	switch(month)
	{
		case 1:
			printf("\nName of the month : January");
			break;
		case 2:
			printf("\nName of the month : February");
			break;
		case 3:
			printf("\nName of the month : March");
			break;
		case 4:
			printf("\nName of the month : April");
			break;
		case 5:
			printf("\nName of the month : May");
			break;
		case 6:
			printf("\nName of the month : June");
			break;
		case 7:
			printf("\nName of the month : July");
			break;
		case 8:
			printf("\nName of the month : August");
			break;
		case 9:
			printf("\nName of the month : September");
			break;
		case 10:
			printf("\nName of the month : October");
			break;
		case 11:
			printf("\nName of the month : November");
			break;
		case 12:
			printf("\nName of the month : December");
			break;
		default:
			printf("\nPlease enter number between 1 to 12.");
			break;
	}
}
