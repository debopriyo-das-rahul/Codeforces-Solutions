#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char c, s[11] = "codeforces";
        scanf(" %c", &c);
        int valid = 0;
        for (int i = 0; i < 10; i++)
        {
            if (s[i] == c)
            {
                valid = 1;
                break;
            }
        }
        if (valid)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}