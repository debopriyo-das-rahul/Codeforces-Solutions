#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000], b[100], c[100];
    scanf("%s%s%s", a, b, c);
    strcat(a, b);
    int name_count[26] = {0};
    int pile[26] = {0};
    for (int i = 0; a[i] != '\0'; i++)
    {
        name_count[a[i] - 'A']++;
    }
    for (int i = 0; c[i] != '\0'; i++)
    {
        pile[c[i] - 'A']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (name_count[i] != pile[i])
        {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}