#include <stdio.h>
#include <math.h>
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
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a[3];
        for (int i = 0; i < 3; i++)
        {
            scanf("%d", &a[i]);
        }
        sort(a, 3);
        printf("%d\n", a[1]);
    }
}