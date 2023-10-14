#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int n;
    scanf("%d", &n);
    char s[n];
    scanf("%s", s);
    int ch[26] = {0};
    for (int i = 0; i < n; i++)
    {
        char c = s[i];
        if (isalpha(c))
        {
            c = tolower(c);
            ch[c - 'a'] = 1;
        }
    }
    int pangram = 1;
    for (int i = 0; i < 26; i++)
    {
        if (ch[i] == 0)
        {
            pangram = 0;
        }
    }
    if (pangram == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}