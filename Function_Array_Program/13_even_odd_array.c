/*WAP to accept 5 numbers from user and check entered number is even or odd
using of array */

#include<stdio.h>
main()
{
	int size,arr[50],i,even=0,odd=0;
	
	printf("Enter the size of array : ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("\nEnter arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	printf("\n\n-------Even Numbers-------");
	for(i=0;i<size;i++)
	{
		if(arr[i]%2==0)
		{
				printf("\narr[%d] : %d",i,arr[i]);
				even++;
		}
	}
	printf("\nTotal Even Elements are : %d",even);
	
	printf("\n\n-------Odd Numbers-------");
	for(i=0;i<size;i++)
	{
		if(arr[i]%2!=0)
		{
				printf("\narr[%d] : %d",i,arr[i]);
				odd++;
		}	
	}	
	printf("\nTotal Odd Elements are : %d",odd);
}
