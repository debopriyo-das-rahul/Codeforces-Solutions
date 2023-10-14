#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    long long n;
    for (int i = 0; i < t; i++)
    {
        scanf("%lld", &n);
        if (n == 2)
        {
            printf("0\n");
        }
        else
        {
            printf("%lld\n", (n - 1) / 2);
        }
    }
}