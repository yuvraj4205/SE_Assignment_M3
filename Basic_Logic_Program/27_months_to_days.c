//Convert days into months

#include<stdio.h>
main()
{
	int days,months;
	
	printf("Enter number of days : ");
	scanf("%d",&days);
	
	months=days/30;
	
	printf("months = %d",months);
}
