//Accept 5 numbers from user and perform sum of array

#include<stdio.h>
main()
{
	int arr[5],i,sum=0;
	
	for(i=0;i<5;i++)
	{
		printf("Enter numbers : ");
		scanf("%d",&arr[i]);
		printf("\n");
		sum=sum+arr[i];
	}
	printf("\n\nSum of all the Elements : %d",sum);
}
