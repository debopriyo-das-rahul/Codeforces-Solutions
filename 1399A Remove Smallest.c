#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void sort(int *arr, int n);
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, valid = 0;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        sort(a, n);
        for (int i = 1; i < n; i++)
        {
            if (a[i] - a[i - 1] > 1)
            {
                valid = 1;
                break;
            }
        }
        if (valid)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
}
void sort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}