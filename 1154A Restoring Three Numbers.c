#include <stdio.h>
void sort(int arr[], int n);
int main()
{
    int n[5];
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &n[i]);
    }
    sort(n, 4);
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", n[3] - n[i]);
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