#include <stdio.h>
int main()
{
    int n;
    char s[100000];
    scanf("%d", &n);
    scanf("%s", s);
    int A = 0;
    int D = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            A++;
        }
        else if (s[i] == 'D')
        {
            D++;
        }
    }
    if (A > D)
    {
        printf("Anton\n");
    }
    else if (D > A)
    {
        printf("Danik\n");
    }
    else if (A == D)
    {
        printf("Friendship\n");
    }
    return 0;
}