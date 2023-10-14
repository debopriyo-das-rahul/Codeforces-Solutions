#include <stdio.h>
#include <string.h>
int main()
{
    char song[201];
    gets(song);
    int len = strlen(song);
    char original[201];
    int index = 0;
    for (int i = 0; i < len; i++)
    {
        if (song[i] == 'W' && song[i + 1] == 'U' && song[i + 2] == 'B')
        {
            i += 2;

            if (index > 0 && original[index - 1] != ' ')
            {
                original[index++] = ' '; // add space between words
            }
        }
        else
        {
            original[index++] = song[i];
        }
    }
    original[index] = '\0'; // null terminate the array
    printf("%s\n", original);
    return 0;
}