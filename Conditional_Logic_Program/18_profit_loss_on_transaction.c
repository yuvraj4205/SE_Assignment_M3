//Write a C program to calculate profit and loss on a transaction.

#include<stdio.h>
main()
{
    float cost,sell,profit,loss;

    printf("Enter cost price: ");
    scanf("%f",&cost);

    printf("Enter selling price: ");
    scanf("%f",&sell);

    if(sell>cost){
        profit = sell-cost;
        printf("\nProfit = %.2f",profit);
	}else if(cost>sell){
        loss = cost-sell;
        printf("\nLoss = %.2f",loss);
	}else{
        printf("\nNo profit, no loss.");
    }
}
