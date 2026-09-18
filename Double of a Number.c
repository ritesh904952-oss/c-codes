#include <stdio.h>

int main()
{
    int number, result;

    printf("Enter a number: ");
    scanf("%d", &number);

    result = number * 2;

    printf("Double of number = %d", result);

    return 0;
}