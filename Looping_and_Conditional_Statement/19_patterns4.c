//patterns:

#include<stdio.h>
main()
{
	int i=6,r,c;
    char ch='A';

    for(r=0;r<i;r++)
	{
        for(c=0;c<=r;c++)
		{
            printf("%c ",ch++);
        }
        printf("\n");
    }
}
