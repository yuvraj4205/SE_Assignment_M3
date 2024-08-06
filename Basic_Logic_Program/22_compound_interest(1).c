/* Calculate compound interest (Compound Interest formula:
a. Formula to calculate compound interest annually is given by:Amount= P(1 + R/100)t
b. Compound Interest = Amount – P */

#include<stdio.h>
main()
{
	double ci,a,p,r,t;
	
	printf("Enter the principal(p) : ");
	scanf("%lf",&p);
	
	printf("Enter the rate(r) : ");
	scanf("%lf",&r);
	
	printf("Enter the time(t) : ");
	scanf("%lf",&t);
	
	a=p*pow(1+r/100,t);
	
	ci=a-p;
	
	printf("\nAmount after %.2lf years : %lf",t,a);
	printf("\nCompound interest after %.2lf years : %lf",t,ci);
}
