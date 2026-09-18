#include <stdio.h>

int main()
{
    float rupees, paise;

    printf("Enter amount in rupees: ");
    scanf("%f", &rupees);

    paise = rupees * 100;

    printf("Amount in paise = %.2f", paise);

    return 0;
}