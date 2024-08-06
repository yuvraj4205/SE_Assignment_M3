//Store 5 numbers in array and sort it in ascending order

#include<stdio.h>
main()
{
	int i,j,arr[50],size=5,temp;
	
	for(i=0;i<size;i++)
	{
		printf("\nEnter arr[%d] : ",i+1);
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	printf("\n-----After Sorting-----");
	for(i=0;i<size;i++)
	{
		printf("\narr[%d] : %d",(i+1),arr[i]);
	}
}
