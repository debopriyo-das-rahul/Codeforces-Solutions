#include <stdio.h>
#include <math.h>
int max(int x, int y);
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int s1 = a + b * c;
    int s2 = a * (b + c);
    int s3 = a * b * c;
    int s4 = (a + b) * c;
    int s5 = a + b + c;
    int s6 = a * b + c;

    int finalmax = max(max(max(s1, s2), max(s3, s4)), max(s5, s6));

    printf("%d\n", finalmax);
    return 0;
}
int max(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}