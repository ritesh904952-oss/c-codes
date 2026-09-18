#include <stdio.h>

int main()
{
    int m1, m2, m3, m4, m5, total;

    printf("Enter marks of subject 1: ");
    scanf("%d", &m1);

    printf("Enter marks of subject 2: ");
    scanf("%d", &m2);

    printf("Enter marks of subject 3: ");
    scanf("%d", &m3);

    printf("Enter marks of subject 4: ");
    scanf("%d", &m4);

    printf("Enter marks of subject 5: ");
    scanf("%d", &m5);

    total = m1 + m2 + m3 + m4 + m5;

    printf("Total marks = %d", total);

    return 0;
}