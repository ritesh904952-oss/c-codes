#include <stdio.h>

int main()
{
    int minutes, seconds;

    printf("Enter time in minutes: ");
    scanf("%d", &minutes);

    seconds = minutes * 60;

    printf("Time in seconds = %d", seconds);

    return 0;
}