#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    char c[101];

    while (n--)
    {
        scanf("%s", &c);
        int l = strlen(c);
        if (l > 10)
        {
            printf("%c%d%c\n", c[0], l - 2, c[l - 1]);
        }
        else
        {
            printf("%s\n", c);
        }
    }

    return 0;
}
