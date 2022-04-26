#include <stdio.h>

int main(void)
{
    int wall;
    // Loop to get the number < 0 and < 8
    do
    {
        printf("Blocks: ");
        scanf("%d", &wall);

    }
    while (wall <= 0 || wall > 8);

    // Loop
    for (int c = 0; c < wall; c++)
    {
        // Create the spaces
        for (int k = (wall - 1); k > c; k--)
        {
            printf(" ");
        }

        // Loop to add the walls
        for (int j = 0; j <= c; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
