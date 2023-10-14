#include <stdio.h>
#include <string.h>
int main()
{
    char s[101], t[101];
    scanf("%s %s", s, t);
    int len_s = strlen(s);
    int len_t = strlen(t);
    int reverse = 1;
    if (len_s != len_t)
    {
        reverse = 0;
    }
    else
    {
        for (int i = 0; i < len_s; i++)
        {
            if (s[i] != t[len_s - 1 - i])
            {
                reverse = 0;
                break;
            }
        }
    }
    if (reverse == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}