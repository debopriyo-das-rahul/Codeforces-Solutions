#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[4];
        scanf("%s", s);
        if (strcmp(s, "abc") == 0)
        {
            printf("YES\n");
            continue;
        }
        if ((s[0] == 'b' && s[1] == 'a') || (s[1] == 'b' && s[2] == 'a') || (s[0] == 'c' && s[1] == 'b') || (s[1] == 'c' && s[2] == 'b'))
        {
            printf("YES\n");
            continue;
        }

        printf("NO\n");
    }

    return 0;
}
