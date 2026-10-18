
#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter number of columns (odd number): ");
    scanf("%d", &n);

    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if ((i == 1 && j == 1) ||
                (i == 1 && j == n) ||
                (i == 3 && j == 1) ||
                (i == 3 && j == n) ||
                (i == 2 && j == n / 2 + 1))
            {
                printf("*");
            }
            else if (i == 2 && (j == 2 || j == n - 1))
            {
                printf("*");
            }
            else if (i == 3 && (j == 3 || j == n - 2))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
