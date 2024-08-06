//WAP to convert years into days and days into years

#include<stdio.h>
main()
{
	int years,days;
	
	printf("Enter number of years : ");
	scanf("%d",&years);
	
	days=years*365.0;
	
	printf("\nTotal days : %d\n",days);
	
	printf("\nEnter number of days : ");
	scanf("%d",&days);
	
	years=days/365.0;
	
	printf("\nTotal years : %d",years);
}
