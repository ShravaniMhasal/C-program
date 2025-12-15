#include <stdio.h>

int main()
{
    int A[2][2] = {{4, 6}, {6, 8}};
    int sym = 1;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (A[i][j] != A[j][i])
            {
                sym = 0;
                break;
            }
        }
    }

    if (sym == 1)
        printf("Matrix is symmetric");
    else
        printf("Matrix is not symmetric");

    return 0;
}
