#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int a = n * m;
    int b;
    if (m > n)
    {
        b = a / m;
    }
    else
    {
        b = a / n;
    }
    if (b % 2 == 0)
    {
        printf("Malvika\n");
    }
    else
    {
        printf("Akshat\n");
    }
    return 0;
}