#include <stdio.h>
#include <string.h>
int main()
{
    int n, count = 1;
    scanf("%d", &n);
    int m[100001];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (m[i] != m[i + 1])
        {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}