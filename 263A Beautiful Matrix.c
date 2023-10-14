#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int m[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }
    int rowwith1 = 1, colwith1 = 1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (m[i][j] == 1)
            {
                rowwith1 = i;
                colwith1 = j;
                break;
            }
            if (rowwith1 != 1)
            {
                break;
            }
        }
    }
    int row_moves = abs(rowwith1 - 2);
    int col_moves = abs(colwith1 - 2);

    printf("%d\n", row_moves + col_moves);

    return 0;
}