#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int arr[1000];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < m - 1; i++)
    {
        for (int j = 0; j < m - i - 1; j++)
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
    }
    int minidiff = arr[n - 1] - arr[0];
    for (int i = 1; i <= m - n; i++)
    {
        int diff = arr[i + n - 1] - arr[i];
        if (diff < minidiff)
        {
            minidiff = diff;
        }
    }
    printf("%d", minidiff);
    return 0;
}