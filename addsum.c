#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, i,sum=0;
    // char tby;

    printf("Enter a number:");
    scanf("%d", &a);
    printf("Enter a limit:");
    scanf("%d", &b);
    for (i = 1; i <= b; i++)
    {
        i+=1;
        printf("\n%d*%d=%d", a, i, a * i);
       sum=+a*i;
    ////   printf("\t\t\t%d+%d=%d\n", a, i, a + i);
        
    }
printf("sum of even table is %d",sum);

    return 0;
}