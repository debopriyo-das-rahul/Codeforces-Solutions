#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    while (1)
    {
        n++;
        int a = n / 1000;
        int b = n / 100 % 10;
        int c = n / 10 % 10;
        int d = n % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            break;
        }
    }
    printf("%d\n", n);
    return 0;
}