#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void sort(char *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    char name[] = "Timur";
    int len = strlen(name);
    sort(name, len);
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        char s[n + 1];
        scanf("%s", s);
        int lens = strlen(s);
        sort(s, lens);
        if (strcmp(s, name) == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}