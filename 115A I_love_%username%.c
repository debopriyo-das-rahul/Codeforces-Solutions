#include <stdio.h>
int max(int a[], int i);
int min(int a[], int i);
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int amazing = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            amazing++;
            max = a[i];
        }
    }
    int min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (min > a[i])
        {
            amazing++;
            min = a[i];
        }
    }
    printf("%d\n", amazing);
}