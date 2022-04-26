#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    float cash;
    int total = 0;

    do
    {
        printf("Cash: ");
        scanf("%f", &cash);

    } while (cash <= 0);

    int coins = round(cash * 100 );

    while (coins >= 25)
    {
        coins -= 25;
        total++;
    }

    while (coins >= 10)
    {
        coins -= 10;
        total++;
    }

    while (coins >= 5)
    {
        coins -= 5;
        total++;
    }

    while (coins >= 1)
    {
        coins -= 1;
        total++;
    }

    printf("%d", total);
    return 0;
}
