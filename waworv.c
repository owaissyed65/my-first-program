#include<stdio.h>
#include<conio.h>
void sub(int a ,int b);
int main()
{
    sub(20,10);
    return 0;
}
void sub(int a ,int b)
{
    int c=a-b;
    printf("%d",c);
}
