/*WAP program to print below output using for loop
01 02 03 04 05 06 07 08 09 10
11 12 13 14 15 16 17 18 19 20
..............
..............
41 42 43 44 45 46 47 48 49 50 */

#include<stdio.h>
main()
{
	int rows=5,cols=10,num=1;
	int r,c;

    for(r=0;r<rows;r++)
	{
        for(c=0;c<cols;c++)
		{
            if(num<10)
			{
                printf(" %d ",num);
            }
			else
			{
                printf("%d ",num);
            }
            num++;
        }
        printf("\n");
    }
}
