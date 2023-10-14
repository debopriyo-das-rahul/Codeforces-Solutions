#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    gets(s);
    int len = strlen(s);
    int count = 0;
    int letters[26] = {0};
    for (int i = 0; i < len; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z' && letters[s[i] - 'a'] == 0)
        {
            letters[s[i] - 'a'] = 1;

            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}