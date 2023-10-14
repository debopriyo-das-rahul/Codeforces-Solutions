#include <stdio.h>
int div(int a, int b);
int main()
{
    int t;
    scanf("%d", &t);
    int a, b;
    for (int i = 0; i < t; i++)
    {
        scanf("%d%d", &a, &b);
        int ans = div(a, b);
        printf("%d\n", ans);
    }
}
int div(int a, int b)
{
    if (a % b == 0)
    {
        return 0;
    }
    else
    {
        return b - (a % b);
    }
}