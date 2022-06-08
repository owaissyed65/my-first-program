#include <stdio.h>
void starprint(int row)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void reversestarpattern(int row)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j <= row - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int rows, type;
    printf("Type 0 for star pattern and 1 for reverse star pattern:");
    scanf("%d", &type);

    switch (type)
    {
    case 0:
        printf("How many rows You want:");
        scanf("%d", &rows);
        starprint(rows);
        break;
    case 1:
        printf("How many rows You want:");
        scanf("%d", &rows);
        reversestarpattern(rows);
        break;
    default:
        printf("Invalid choice");
        break;
    }
    return 0;
}