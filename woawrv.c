#include <stdio.h>
#include <conio.h>
int sum();
int main()
{
    int a;
    sum();
    printf("positive num is = %d",sum());
    return 0;
}
int sum()
{
    int a=10,b=20,c; 
     c=a+b;
    return c;
}