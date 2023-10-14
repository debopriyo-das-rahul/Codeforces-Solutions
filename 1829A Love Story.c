#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[11], c[11] = "codeforces";
        scanf("%s", s);
        int count = 0;
        for (int i = 0; i < 10; i++)
        {
            if (s[i] != c[i])
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
}