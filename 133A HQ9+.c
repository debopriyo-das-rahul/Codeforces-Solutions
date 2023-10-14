#include <stdio.h>
#include <string.h>
int main()
{
    char s[101];
    gets(s);
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
        {
            printf("YES\n");

            return 0;
        }
    }
    printf("NO\n");
}