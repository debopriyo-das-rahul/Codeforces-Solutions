#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char s[50];
    int face = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%s", s);
        if (strcmp(s, "Tetrahedron") == 0)
        {
            face += 4;
        }
        else if (strcmp(s, "Cube") == 0)
        {
            face += 6;
        }
        else if (strcmp(s, "Octahedron") == 0)
        {
            face += 8;
        }
        else if (strcmp(s, "Dodecahedron") == 0)
        {
            face += 12;
        }
        else if (strcmp(s, "Icosahedron") == 0)
        {
            face += 20;
        }
    }
    printf("%d\n", face);
    return 0;
}
