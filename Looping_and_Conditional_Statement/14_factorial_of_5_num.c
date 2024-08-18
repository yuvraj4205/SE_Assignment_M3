//Accept 5 numbers from user and find those numbers factorials

#include <stdio.h>
main()
{
    int num, i, j;
    long int factorial;

    for(j=0;j<5;j++)
	{
        printf("Enter a positive number : ");
        scanf("%d",&num);
        
        if(num<0)
		{
            printf("\nError! Factorial of a negative number doesn't exist.");
        }
		else
		{
            factorial=1;
            for(i=1;i<=num;++i)
			{
                factorial*=i;
            }
            printf("Factorial of %d = %ld\n\n",num,factorial);
        }
    }
}
