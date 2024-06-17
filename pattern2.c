#include <stdio.h>
int main()
{
    int rows = 4;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows - i - 1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }

        for (int l = 0; l < 2; l++)
        {
            printf(" ");
        }

        for (int m = 0; m <= i; m++)
        {
            printf("#");
        }
        printf("\n");
    }
}
