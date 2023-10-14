#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    char p[n][m];
    int color = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf(" %s", &p[i][j]);
            if (p[i][j] != 'W' && p[i][j] != 'B' && p[i][j] != 'G')
            {
                color = 1;
            }
        }
    }

    if (color)
    {
        printf("#Color\n");
    }
    else
    {
        printf("#Black&White\n");
    }
}