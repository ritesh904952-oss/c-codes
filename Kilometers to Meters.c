#include <stdio.h>

int main()
{
    float kilometer, meter;

    printf("Enter distance in kilometers: ");
    scanf("%f", &kilometer);

    meter = kilometer * 1000;

    printf("Distance in meters = %.2f", meter);

    return 0;
}