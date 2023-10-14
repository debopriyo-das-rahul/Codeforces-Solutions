#include <stdio.h>
int main()
{
    int n, p, q;
    scanf("%d", &n);
    scanf("%d", &p);
    int xpass[p];
    for (int i = 0; i < p; i++)
    {
        scanf("%d", &xpass[i]);
    }
    scanf("%d", &q);
    int ypass[q];
    for (int i = 0; i < q; i++)
    {
        scanf("%d", &ypass[i]);
    }
    int lvl[101] = {0};
    for (int i = 0; i < p; i++)
    {
        lvl[xpass[i]] = 1;
    }
    for (int i = 0; i < q; i++)
    {
        lvl[ypass[i]] = 1;
    }
    int allpass = 1;
    for (int i = 1; i <= n; i++)
    {
        if (lvl[i] == 0)
        {
            allpass = 0;
            break;
        }
    }
    if (allpass == 1)
    {
        printf("I become the guy.\n");
    }
    else
    {
        printf("Oh, my keyboard!\n");
    }
    return 0;
}