#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int cubes[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &cubes[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (cubes[j] > cubes[j + 1])
            {
                int temp = cubes[j];
                cubes[j] = cubes[j + 1];
                cubes[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", cubes[i]);
    }
    return 0;
}