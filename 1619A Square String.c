#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[101];
        scanf("%s", s);
        int len = strlen(s);
        if (len % 2 != 0)
        {
            printf("NO\n");
        }
        else
        {
            int len2 = len / 2;
            if (strncmp(s, s + len2, len2) == 0)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
}