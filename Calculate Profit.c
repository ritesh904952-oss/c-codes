#include <stdio.h>

int main()
{
    float cost, selling, profit;

    printf("Enter cost price: ");
    scanf("%f", &cost);

    printf("Enter selling price: ");
    scanf("%f", &selling);

    profit = selling - cost;

    printf("Profit = %.2f", profit);

    return 0;
}