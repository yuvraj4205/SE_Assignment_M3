//Accept 5 names from user at run time.

#include<stdio.h>
main()
{
	char names[5][20];
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("Enter names [%d] : ",i+1);
		scanf("%s",&names[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("\nName [%d] : %s",i+1,names[i]);
	}
}
