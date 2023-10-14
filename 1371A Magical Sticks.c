#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, a = 0;
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            a = n / 2;
        }
        else
        {
            a = n / 2 + 1;
        }
        printf("%d\n", a);
    }
    return 0;
}
