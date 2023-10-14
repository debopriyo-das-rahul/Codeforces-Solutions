#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int police = 0;
    int crime = 0;
    while (n--)
    {
        int t;
        scanf("%d", &t);
        if (t == -1)
        {
            if (police > 0)
            {
                police--;
            }
            else
            {
                crime++;
            }
        }
        else
        {
            police += t;
        }
    }
    printf("%d\n", crime);
}