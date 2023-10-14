#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int i, j, l;
    char a[100], t;
    gets(a);
    l = strlen(a);
    for (i = 0; i < l - 1; i++)
    {
        for (j = 0; j < l - i - 1; j++)
        {
            if (a[j] != '+')
            {
                if (a[j] > a[j + 2])
                {
                    t = a[j];
                    a[j] = a[j + 2];
                    a[j + 2] = t;
                }
            }
        }
    }
    printf("%s", a);
    return 0;
}