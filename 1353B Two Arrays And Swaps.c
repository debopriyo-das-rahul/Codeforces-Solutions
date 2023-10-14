#include <stdio.h>
#include <string.h>
void sort(int arr[], int n);
void reversesort(int arr[], int n);
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        int a[101], b[101];
        scanf("%d%d", &n, &k);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &b[i]);
        }
        sort(a, n);
        reversesort(b, n);
        for (int i = 0; i < k; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (b[j] > a[j])
                {
                    int temp = a[j];
                    a[j] = b[j];
                    b[j] = temp;
                    break;
                }
            }
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }
        printf("%d\n", sum);
    }
}
void sort(int arr[], int n)
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
void reversesort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}