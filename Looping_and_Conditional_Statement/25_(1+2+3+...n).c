//(1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)

#include<stdio.h>
main()
{
	int n,i,sum=0;
	
    printf("Enter the value of n : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
	{
        sum+=i*(i+1)/2;
    }
    printf("\nSum : %d",sum);
}
