#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d%d", &n, &k);
        int valid = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            scanf("%d", &a);
            if (a == k)
            {
                valid = 1;
            }
        }
        if (valid)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}