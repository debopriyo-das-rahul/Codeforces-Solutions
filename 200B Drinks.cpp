#include <stdio.h>
int main()
{
    double n, d, i, j, f = 0;
    scanf("%lf", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%lf", &d);
        f += d;
    }
    j = f / n;

    printf("%.12lf\n", j);
    return 0;
}