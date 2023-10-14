#include <stdio.h>
#include <string.h>
int main()
{
    int n, a = 0;
    char x[5];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", &x);
        if (strcmp(x, "X++") == 0 || strcmp(x, "++X") == 0)
        {
            a++;
        }
        if (strcmp(x, "X--") == 0 || strcmp(x, "--X") == 0)
        {
            a--;
        }
        a = a;
    }
    printf("%d\n", a);
}