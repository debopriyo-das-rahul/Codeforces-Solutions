#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int exit, enter, tram = 0, capacity = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d", &exit, &enter);
        tram -= exit;
        tram += enter;
        if (tram > capacity)
        {
            capacity = tram;
        }
    }
    printf("%d\n", capacity);
    return 0;
}