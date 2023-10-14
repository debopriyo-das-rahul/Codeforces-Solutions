#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char s[101];
    scanf("%s", s);
    int upper = 0;
    int lower = 0;
    int len, i;
    while (1)
    {
        len = strlen(s);
        for (i = 0; i < len; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                upper++;
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                lower++;
            }
        }

        if (upper > lower)
        {
            printf("%s\n", strupr(s));
            break;
        }
        else
        {
            printf("%s\n", strlwr(s));
            break;
        }
    }
    return 0;
}