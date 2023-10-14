#include <stdio.h>
int main()
{
    int n, h, count = 0, i;
    scanf("%d%d", &n, &h);
    int a[1001];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if (a[i] > h)
        {
            count += 2;
        }
        else
        {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}