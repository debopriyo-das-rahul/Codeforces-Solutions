#include <stdio.h>
int main()
{
    long long n[4], i, count = 0;
    for (i = 0; i < 4; i++)
    {
        scanf("%lld", &n[i]);
    }
    for (i = 0; i < 3; i++)
    {
        if (n[i] == n[i + 1] || n[i] == n[i + 2] || n[i] == n[i + 3])
        {
            count++;
        }
    }

    printf("%lld\n", count);
    return 0;
}
