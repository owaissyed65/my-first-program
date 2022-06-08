#include <stdio.h>
int add(int a);
int main()
{
    int a;
    int n;
    printf("Enter a number:");
    scanf("%d",&a);
    n = add(a);
    printf("\n%d", n);
    // printf("Hello world");
    return 0;
}
int add(int a)
{
    if (a == 0)
    {
        return 1;
    }
    else
    {
        return (a + add(a -1));
    }
}
