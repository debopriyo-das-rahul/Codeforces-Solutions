#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        char s[4];
        scanf("%s", s);
        for (int i = 0; s[i] != '\0'; i++)
        {
            s[i] = tolower(s[i]);
        }
        if (strcmp(s, "yes") == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}