#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int h[101];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &h[i]);
    }
    int max = h[0];
    int min = h[0];
    int max_i = 0;
    int min_i = 0;
    for (i = 0; i < n; i++)
    {
        if (h[i] > max)
        {
            max = h[i];
            max_i = i;
        }
        if (h[i] <= min)
        {
            min = h[i];
            min_i = i;
        }
    }
    int s;
    if (max_i > min_i)
    {
        s = (max_i - 1) + (n - min_i) - 1;
    }
    else
    {
        s = (max_i - 1) + (n - min_i);
    }
    printf("%d\n", s);
}