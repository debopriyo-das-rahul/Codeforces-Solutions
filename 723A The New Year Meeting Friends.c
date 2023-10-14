#include <stdio.h>
int max(int a, int b);
int min(int a, int b);
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int s = max(max(a, b), c) - min(min(a, b), c);
    printf("%d\n", s);
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