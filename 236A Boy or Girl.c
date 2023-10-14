#include <stdio.h>
#include <string.h>

int main()
{
    char name[101];
    scanf("%s", name);
    int count = 0, valid = 1, i, j;

    for (i = 0; name[i] != '\0'; i++)
    {
        for (j = i - 1; j >= 0; j--)
        {
            if (name[j] == name[i])
            {
                valid = 0;
                break;
            }
            else
            {
                valid = 1;
            }
        }
        if (valid == 1)
        {
            count++;
        }
    }

    if (count % 2 == 0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }

    return 0;
}
