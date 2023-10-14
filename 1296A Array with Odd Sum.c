#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        int odd = 0, even = 0, sum = 0;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            if (a[i] % 2 != 0)
            {
                odd++;
            }
            else
            {
                even++;
            }
            sum += a[i];
        }
        if (sum % 2 != 0)
        {
            printf("YES\n");
        }
        else
        {
            if (odd != 0 && even != 0)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
}