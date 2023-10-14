#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int recived[n], gave[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &recived[i]);
        gave[recived[i] - 1] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", gave[i]);
    }

    return 0;
}