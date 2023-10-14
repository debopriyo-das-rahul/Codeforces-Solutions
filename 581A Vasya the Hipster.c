#include <stdio.h>
int max(int a, int b);
int min(int a, int b);
int main()
{
    int a, b, c, d, s;
    scanf("%d%d", &a, &b);
    c = min(a, b);
    d = max(a, b);
    s = (d - c) / 2;
    printf("%d %d\n", c, s);
}
int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}