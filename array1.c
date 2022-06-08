#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, mark[2][4] = {{34, 45, 36, 38}, {3, 2, 3, 3}};

    for (i = 0; i < 2; i++)

    {
        for (j = 0; j < 4; j++)
        {

        // printf("\nValue of %d ,%d element of the array is:%d\n", i, j, mark[i][j]);
        printf("%d ,%d is =%d ",i,j,mark[i][j]);

        }
        printf("\n");
    }
    return 0;
}