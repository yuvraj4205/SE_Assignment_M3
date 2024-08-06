//1/2 - 2/3 + 3/4 - 4/5 + 5/6 ..........n

#include<stdio.h>
main()
{
	int n;
    float sum=0.0,term;
    int i;

    printf("Enter the number of terms : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
	{
        term=(float)i/(i+1);

        if(i%2==1)
		{
            sum+=term;
        }
		else
		{
            sum-=term;
        }
    }
    printf("\nThe sum of the series is: %.4f",sum);
}
