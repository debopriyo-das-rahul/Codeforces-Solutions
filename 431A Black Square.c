#include <stdio.h>
#include <string.h>
int main()
{
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    char s[1000001];
    scanf("%s", s);
    int len = strlen(s);
    int cal = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '1')
        {
            cal += a;
        }
        if (s[i] == '2')
        {
            cal += b;
        }
        if (s[i] == '3')
        {
            cal += c;
        }
        if (s[i] == '4')
        {
            cal += d;
        }
    }
    printf("%d\n", cal);
}