#include <stdio.h>

int main()
{
    float meter, centimeter;

    printf("Enter distance in meters: ");
    scanf("%f", &meter);

    centimeter = meter * 100;

    printf("Distance in centimeters = %.2f", centimeter);

    return 0;
}