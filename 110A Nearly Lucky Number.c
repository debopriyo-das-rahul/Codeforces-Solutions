#include <stdio.h>
int countluckydigits(long long n);
int lucky(int n);
int main()
{
    long long n;
    scanf("%lld", &n);
    int luckydigitcount = countluckydigits(n);
    if (lucky(luckydigitcount))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
int countluckydigits(long long n)
{
    int count = 0;
    while (n > 0)
    {
        int digit = n % 10;
        if (digit == 4 || digit == 7)
        {
            count++;
        }
        n /= 10;
    }
    return count;
}
int lucky(int n)
{
    return (n == 4 || n == 7);
}