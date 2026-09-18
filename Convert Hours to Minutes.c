#include <stdio.h>

int main()
{
    int hours, minutes;

    printf("Enter time in hours: ");
    scanf("%d", &hours);

    minutes = hours * 60;

    printf("Time in minutes = %d", minutes);

    return 0;
}