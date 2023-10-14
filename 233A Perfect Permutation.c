#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n % 2 == 1)
    {
        printf("-1\n");
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                printf("%d", i + 2);
            }
            else
            {
                printf("%d", i);
            }
            printf(" ");
        }
    }
}