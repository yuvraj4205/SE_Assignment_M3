//Area of rectangle = w*l

#include<stdio.h>
main()
{
	float a,w,l;
	
	printf("Enter the width : ");
	scanf("%f",&w);
	
	printf("Enter the length : ");
	scanf("%f",&l);
	
	a=w*l;
	
	printf("Area of rectangle is %.3f.",a);
}
