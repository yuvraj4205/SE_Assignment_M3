//Calculate compound interest

#include<stdio.h>
main()
{
	double principal = 10000;  
	double rate = 5; 
	double time = 2;    
	double Amount = principal*((pow((1 + rate / 100),time)));
	double CI = Amount - principal; 
	
	printf("Compound Interest is : %2.lf",CI);
}
