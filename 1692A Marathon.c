#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c, d;
        scanf("%d%d%d%d", &a, &b, &c, &d);
        int p = ((b > a) + (c > a) + (d > a));
        printf("%d\n", p);
    }
}