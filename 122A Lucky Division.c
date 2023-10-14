#include <stdio.h>

int lucky(int n)
{
    while (n > 0)
    {
        int d = n % 10;
        if (d != 4 && d != 7)
        {
            return 0;
        }
        n /= 10;
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);

    if (lucky(n))
    {
        printf("YES\n");
        return 0;
    }

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0 && lucky(i))
        {
            printf("YES\n");
            return 0;
        }
    }

    printf("NO\n");
    return 0;
}
