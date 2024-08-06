//Accept the input month number and print number of days in that month.

#include<stdio.h>
main()
{
	int month;
	
	printf("Enter number of a month : ");
	scanf("%d",&month);
	
	if(month<1 || month>12)
        printf("\nInvalid month number. Please enter a number between 1 to 12.\n");
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
                	printf("\nNumber of days in month %d is 31.",month);
                		break;
            	case 4:
            	case 6:
            	case 9:
            	case 11:
                	printf("\nNumber of days in month %d is 30.",month);
                		break;
            	case 2:
                	printf("\nNumber of days in month %d is 28 or 29 depends on year.",month);
    		}
    }
}
