//Convert years into days and months

#include<stdio.h>
main()
{
	int years,days,months;
	
	printf("Enter number of years : ");
	scanf("%d",&years);
	
	months=years*12;
	days=years*365;
	
	printf("\nTotal months : %d",months);
	printf("\nTotal days : %d",days);
}
