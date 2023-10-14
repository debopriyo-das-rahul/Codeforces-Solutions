#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int a;
    scanf("%d", &a);
    while (a--)
    {
        int b, flag = 0;
        scanf("%d", &b);
        char d[101], e[101];
        scanf("%s", d);
        scanf("%s", e);
        int len = strlen(d);
        for (int i = 0; i < len; i++)
        {
            if (d[i] != e[i] && (d[i] == 'R' || e[i] == 'R'))
            {
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
}