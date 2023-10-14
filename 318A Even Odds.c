#include <stdio.h>
long long num(long long n, long long k);
int main()
{
    long long n, k;
    scanf("%lld%lld", &n, &k);
    printf("%lld\n", num(n, k));
    return 0;
}
long long num(long long n, long long k)
{
    long long odd = (n + 1) / 2;
    if (k <= odd)
    {
        return 2 * k - 1;
    }
    else
    {
        return 2 * (k - odd);
    }
}