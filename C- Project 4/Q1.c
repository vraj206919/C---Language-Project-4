

#include <stdio.h>

int main()
{

    int n = 5;

    int j, i;
    for (i = 1; i <= n; i++)
    {

        for (j = 41; j <= 40 + i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}