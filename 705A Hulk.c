#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("I hate it");
    }
    else
    {
        printf("I hate that ");
    }

    for (int i = 2; i < n; i++)
    {
        if (i % 2 == 1 && i != n)
        {
            printf("I hate that ");
        }
        else
        {
            printf("I love that ");
        }
    }

    if (n % 2 == 0 && n > 1)
    {
        printf("I love it");
    }
    else if (n > 1)
    {
        printf("I hate it");
    }
}