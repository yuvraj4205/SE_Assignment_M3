/*Write a program in C to calculate and print the electricity bill of a given
customer. The customer ID, name, and unit consumed by the user should
be captured from the keyboard to display the total amount to be paid to the
customer.
	unit		                     | charge/unit
----------------------------------------------------
	upto 350		                 |  1.20
	350 and above but less than 600	 |  1.50
	600 and above but less than 800	 |  1.80
	800 and above		             |  2.00
*/

#include<stdio.h>
main()
{
	int customer_id, units;
    char customer_name[50];

    printf("Enter Customer ID: ");
    scanf("%d",&customer_id);
    printf("Enter Customer Name: ");
    scanf("%s",&customer_name);
    printf("Enter Units Consumed: ");
    scanf("%d",&units);

    float charge;
    if(units<=350)
        charge=units*1.20;
    else if(units<=600)
        charge=350*1.20+(units-350)*1.50;
    else if (units<=800)
        charge=350*1.20+250*1.50+(units-600)*1.80;
    else
        charge=350*1.20+250*1.50+200*1.80+(units-800)*2.00;

    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n",customer_id);
    printf("Customer Name: %s\n",customer_name);
    printf("Units Consumed: %d\n",units);
    printf("Total Amount to be Paid: %.2f\n",charge);
}
