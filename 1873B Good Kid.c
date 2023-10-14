#include <stdio.h>
int minimum(int arr[], int n);
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int mini = minimum(arr, n);
        if (mini == 0)
        {
            int secondMini = 10;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] != 1 && arr[i] < secondMini)
                {
                    secondMini = arr[i];
                }
            }
            for (int i = 0; i < n; i++)
            {
                if (arr[i] == secondMini)
                {
                    arr[i] += 1;
                    break;
                }
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (arr[i] == mini)
                {
                    arr[i] += 1;
                    break;
                }
            }
        }
        long long product = 1;
        for (int i = 0; i < n; i++)
        {
            product *= arr[i];
        }
        printf("%lld\n", product);
    }
    return 0;
}

int minimum(int arr[], int n)
{
    int mini = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < mini)
        {
            mini = arr[i];
        }
    }

    return mini;
}
