#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char color[100];
    scanf("%s", color);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (color[i] == color[i + 1])
        {
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}
