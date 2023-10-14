#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int h, m, d = 24 * 60;
        int min = 0;
        scanf("%d%d", &h, &m);
        min = h * 60 + m;
        printf("%d\n", d - min);
    }
}