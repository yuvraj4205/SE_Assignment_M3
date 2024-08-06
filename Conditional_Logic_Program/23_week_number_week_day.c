//WAP to input the week number and print week day.

#include<stdio.h>
main()
{

    int weekNumber;

    printf("Enter week number (1-7) : ");
    scanf("%d",&weekNumber);

    switch(weekNumber)
	{
        case 1:
            printf("\nDay of the week: Sunday");
            break;
        case 2:
            printf("\nDay of the week: Monday");
            break;
        case 3:
            printf("\nDay of the week: Tuesday");
            break;
        case 4:
            printf("\nDay of the week: Wednesday");
            break;
        case 5:
            printf("\nDay of the week: Thursday");
            break;
        case 6:
            printf("\nDay of the week: Friday");
            break;
        case 7:
            printf("\nDay of the week: Saturday");
            break;
        default:
            printf("\nInvalid week number. Please enter a number between 1 to 7.\n");
            break;
    }
}
