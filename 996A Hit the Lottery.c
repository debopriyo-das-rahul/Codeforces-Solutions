#include <stdio.h>
int main()
{
    int n, a = 0;
    scanf("%d", &n);
    a += n / 100;
    n %= 100;
    a += n / 20;
    n %= 20;
    a += n / 10;
    n %= 10;
    a += n / 5;
    n %= 5;
    a += n / 1;
    n %= 1;
    printf("%d\n", a);
    return 0;
}