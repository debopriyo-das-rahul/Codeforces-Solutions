#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char s[101];
    gets(s);
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        char c = tolower(s[i]);
        if (c == 'a' || c == 'o' || c == 'y' || c == 'e' || c == 'u' || c == 'i')
        {
            continue;
        }
        else
        {

            printf(".%c", c);
        }
    }
}