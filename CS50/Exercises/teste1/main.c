#include <stdio.h>
#include <stdlib.h>

int get_negative_number(void);

int main(void)
{
    int n = get_negative_number();
    printf("%i", n);
}

int get_negative_number(void)
{
    int num;
    while(1)
    {
        printf("Digite um numero negativo: ");
        scanf("%i", &num);

        if (num < 0)
        {
            break;
        }

    }
}
