#include <stdio.h>
#include <string.h>.
int main()
{
    int n, k, size, count = 0;
    int a[50];
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= a[k - 1] && a[i] > 0)
            count++;
    }

    printf("%d\n", count);

    return 0;
}