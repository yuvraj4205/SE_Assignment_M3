/*Write a program in C to read any Month Number in integer and display the
number of days for this month.*/

#include <stdio.h>
main() 
{
    int month;

    printf("Enter month number (1-12) : ");
    scanf("%d",&month);

    if(month<1 || month>12)
        printf("Invalid month number. Please enter a number between 1 to 12.\n");
    else
    {
        switch(month) 
			{
            	case 1:
            	case 3:
            	case 5:
            	case 7:
            	case 8:
            	case 10:
            	case 12:
                	printf("Number of days in month %d is 31.\n",month);
                		break;
            	case 4:
            	case 6:
            	case 9:
            	case 11:
                	printf("Number of days in month %d is 30.\n",month);
                		break;
            	case 2:
                	printf("Number of days in month %d is 28 or 29 depends on year.\n",month);
    		}
    }
}
