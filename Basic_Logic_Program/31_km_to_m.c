//Convert kilometers into meters

#include<stdio.h>
main()
{
	int km,m;
	
	printf("Enter the distance in kilometers : ");
	scanf("%d",&km);
	
	m=km*1000;
	
	printf("%d kilometers = %d meters.",km,m);
}
