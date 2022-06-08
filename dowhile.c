#include <stdio.h>
//#include<conio.h>
//#include<dos.h>
int main()
{
    int num=10, i = 0;

    printf("Enter a number:");
    scanf("%d", &num);
    do
    {
        printf("%d\n", i+1);
        i+=1;
    } while (i <= num);

    return 0;
}