#include <stdio.h>
#include <string.h>
int main()
{
    int n, t, temp;
    scanf("%d%d", &n, &t);
    char s[100];
    scanf("%s", s);
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n - 1;)
        {
            if (s[j] == 'B' && s[j + 1] == 'G')
            {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
                j += 2;
            }
            else
            {
                j++;
            }
        }
    }

    printf("%s\n", s);
    return 0;
}