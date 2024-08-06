//(1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)

#include<stdio.h>
main()
{
	int i=1,n,ans=0;
	
	printf("Enter a number to find ans : ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		printf("(%d*%d) + ",i,i);
		ans+=i*i;
		i++;
	}
	printf("\nAnswer = %d",ans);
}
