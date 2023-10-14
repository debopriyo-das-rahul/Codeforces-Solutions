#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, x;
        scanf("%d%d", &n, &x);
        int a = 2;
        int s = 1;
        while (a < n)
        {
            a += x;
            s++;
        }
        printf("%d\n", s);
    }
}