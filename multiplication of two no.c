#include <stdio.h>

int main()
{
    int a, b, product;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    product = a * b;

    printf("Multiplication = %d", product);

    return 0;
}