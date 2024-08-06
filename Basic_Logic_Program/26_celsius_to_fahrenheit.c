//Convert temperature Fahrenheit to Celsius

#include<stdio.h>
main()
{
    float c,fh;

    printf("Enter temperature in celsius : ");
    scanf("%f",&c);

    fh=(c*1.8)+32;

    printf("Temperature in Fahrenheit : %f",fh);
}
