/*Write a C program to check whether a triangle can be formed with the given
values for the angles.*/

#include<stdio.h>
main()
{
	float angle1,angle2,angle3;

    printf("Enter the three angles of the triangle:\n");
    scanf("%f %f %f",&angle1,&angle2,&angle3);

    if(angle1>0 && angle2>0 && angle3>0 && (angle1+angle2+angle3==180))
	{
        printf("\nThese angles can form a triangle.");
    }
	else
	{
        printf("\nThese angles cannot form a triangle.");
    }
}
