#include <stdio.h>
#include <string.h>
int main()
{
    char s[101];
    scanf("%s", s);
    int len = strlen(s);
    int valid = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == s[i + 1] && s[i] == s[i + 2] && s[i] == s[i + 3] && s[i] == s[i + 4] && s[i] == s[i + 5] && s[i] == s[i + 6])
        {
            valid = 1;
        }
    }
    if (valid == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}