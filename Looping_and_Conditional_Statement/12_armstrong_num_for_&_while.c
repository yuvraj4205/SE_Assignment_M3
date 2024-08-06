//Program of Armstrong Number in C Using For Loop & While Loop

#include<stdio.h>
main()
{
	int n,rem;
	
	printf("Enter a number to find if it is armstrong or not : ");
	scanf("%d",&n);
	
	while(n>0)
	{
		rem=n%10;
		printf("\n\t%d : (%d*%d*%d) = %d",rem,rem,rem,rem,(rem*rem*rem));
		n/=10;
	}
	
	for(rem=1;n>0;n/=10)
	{
		rem=n%10;
		printf("\n\t%d : (%d*%d*%d) = %d",rem,rem,rem,rem,(rem*rem*rem));
	}
}
