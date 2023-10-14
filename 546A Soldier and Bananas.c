#include <stdio.h>
int main()
{
    int k, n, w, s = 0;
    scanf("%d%d%d", &k, &n, &w);
    for (int i = 1; i <= w; i++)
    {
        s = s + (k * i);
    }
    if (s <= n)
    {
        printf("0\n");
    }
    else
    {
        printf("%d\n", s - n);
    }
    return 0;
}