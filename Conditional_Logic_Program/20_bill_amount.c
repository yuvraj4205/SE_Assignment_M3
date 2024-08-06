/*If bill exceeds Rs. 800 then a surcharge of 18% will be charged and the
minimum bill should be of Rs. 256/- */

#include<stdio.h>
main()
{
    float billAmount,totalAmount;
    float surchargeRate=0.18;
    float surchargeAmount=0.0;
    
    printf("Enter the bill amount: ");
    scanf("%f", &billAmount);
    
    if (billAmount > 800)
        surchargeAmount=surchargeRate*billAmount;
    
    totalAmount = billAmount + surchargeAmount;

    if (totalAmount < 256)
        totalAmount = 256;
    
    printf("Total bill amount to be paid: Rs. %.2f\n", totalAmount);   
}
