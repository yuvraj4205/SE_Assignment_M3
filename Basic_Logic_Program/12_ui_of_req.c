/*Accept number of students from user. I need to give 5 apples to each
student. How many apples are required?*/

#include<stdio.h>
main()
{
    int Students,apples;
     
    printf("Enter the number of students : ");
    scanf("%d",&Students);
    
	apples = Students*5;

    printf("Total apples required: %d", apples);
}
