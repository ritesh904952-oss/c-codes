#include <stdio.h>

int main()
{
    float number, result;

    printf("Enter a number: ");
    scanf("%f", &number);

    result = number / 2;

    printf("Half of number = %.2f", result);

    return 0;
}