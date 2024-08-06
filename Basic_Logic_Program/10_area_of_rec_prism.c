//find the area of a rectangular prism formula : A=2(wl+hl+hw)

#include<stdio.h>
main()
{
	float a,w,l,h;
	
	printf("Enter the value of width : ");
	scanf("%f",&w);
	
	printf("Enter the value of length : ");
	scanf("%f",&l);
	
	printf("Enter the value of height : ");
	scanf("%f",&h);
	
	a=2*(w*l+h*l+h*w);
	
	printf("The area of rectangular prism is %f.",a);
}
