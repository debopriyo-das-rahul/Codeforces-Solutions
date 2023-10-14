#include <stdio.h>
#include <string.h>
int main()
{
    char a[101], b[101];
    scanf("%s%s", a, b);
    int l = strlen(a);
    for (int i = 0; i < l; i++)
    {
        if (a[i] != b[i])
        {
            a[i] = 1;
            printf("%d", a[i]);
        }
        if (a[i] == b[i])
        {
            a[i] = 0;
            printf("%d", a[i]);
        }
    }
    return 0;
}