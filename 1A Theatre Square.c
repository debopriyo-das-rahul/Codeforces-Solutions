#include <stdio.h>
long long stones(long long n, long long m, long long a);
int main()
{
    long long n, m, a;
    scanf("%lld%lld%lld", &n, &m, &a);
    long long ans = stones(n, m, a);
    printf("%lld", ans);
    return 0;
}
long long stones(long long n, long long m, long long a)
{
    long long i, j;
    if (n % a == 0)
    {
        i = n / a;
    }
    else
    {
        i = (n / a) + 1;
    }
    if (m % a == 0)
    {
        j = m / a;
    }
    else
    {
        j = (m / a) + 1;
    }
    return i * j;
}