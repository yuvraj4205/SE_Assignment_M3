//Convert minutes into seconds and hours

#include<stdio.h>
main()
{
	float minutes,seconds,hours;
	
	printf("Enter number of minutes : ");
	scanf("%f",&minutes);
	
	seconds=minutes*60;
	hours=minutes/60;
	
	printf("\nTotal seconds : %.2f",seconds);
	printf("\nTotal hours : %.2f",hours);
}
