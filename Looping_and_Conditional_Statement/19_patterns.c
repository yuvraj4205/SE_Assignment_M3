//patterns:

#include<stdio.h>
main()
{
	int r,c,i=1;
	
	for(r=1;r<=5;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf("%d ",i);
			i++;
		}
		printf("\n");
	}
}
