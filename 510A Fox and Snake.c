#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < m; j++)
            {
                printf("#");
            }
        }
        else
        {
            odd++;
            for (int j = 0; j < m; j++)
            {
                if (odd % 2 == 1 && j == m - 1)
                {
                    printf("#");
                }
                else if (odd % 2 == 0 && j == 0)
                {
                    printf("#");
                }
                else
                {
                    printf(".");
                }
            }
        }
        printf("\n");
    }
}