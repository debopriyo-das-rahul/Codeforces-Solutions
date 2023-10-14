#include <stdio.h>
int main()
{
    int n, a;
    int hard = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (a == 1)
        {
            hard = 1;
            break;
        }
    }
    if (hard == 1)
    {
        printf("HARD\n");
    }
    else
    {
        printf("EASY\n");
    }
    return 0;
}