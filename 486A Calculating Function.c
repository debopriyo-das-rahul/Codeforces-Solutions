#include <stdio.h>
#include <math.h>
long long fun(long long n);
int main()
{
    long long n;
    scanf("%lld", &n);
    long long result = fun(n);
    printf("%lld\n", result);
}
long long fun(long long n)
{
    if (n % 2 == 0)
    {
        return n / 2;
    }
    else
    {
        return -(n + 1) / 2;
    }
}