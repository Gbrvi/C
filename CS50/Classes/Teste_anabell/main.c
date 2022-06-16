#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int c=1; c < 3; c++)
    {
        printf("Escreva o valor: ");
        scanf("%d", &c);

        if(c > 0)
        {
            printf("E positivo\n");
        }

    }
}
