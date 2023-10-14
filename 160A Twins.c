#include <stdio.h>
void sort(int coins[], int n);
int main()
{
    int n;
    scanf("%d", &n);
    int coins[101];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &coins[i]);
    }
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += coins[i];
    }
    sort(coins, n);

    int mysum = 0;
    int mycoins = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        mysum += coins[i];
        mycoins++;
        if (mysum > total - mysum)
        {
            break;
        }
    }
    printf("%d\n", mycoins);
    return 0;
}
void sort(int coins[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (coins[j] > coins[j + 1])
            {
                int t = coins[j];
                coins[j] = coins[j + 1];
                coins[j + 1] = t;
            }
        }
    }
}