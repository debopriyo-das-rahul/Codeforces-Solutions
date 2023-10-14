#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void sort(int *arr, int n);
int max(int *arr, int n);
int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort(arr, n);
    int m = max(arr, n);
    for (int i = 0; i < n; i++)
    {
        sum += abs(m - arr[i]);
    }
    printf("%d\n", sum);
}
void sort(int *arr, int n)
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
int max(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[0] < arr[i])
        {
            arr[0] = arr[i];
        }
    }
    return arr[0];
}