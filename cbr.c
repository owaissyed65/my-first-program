/*
ACTUAL AND FORMAL PARAMTERS
1.When a function is called,the values(expression)that are passsed in the call are called
arguments or actual parameter.
2.Formal parameter are called Local variable which are assigned from the argument
when the function is called.
TYPES OF FUNCTION CALL IN C PROGRAMMING:
1.Call by value.
2.Call by refrences.

*/
#include <stdio.h>
void swap(int *x,int *y);
int main(int argc, char const *argv[])
{
    int a=34,b=74;
    printf("%d n %d",a,b);
    swap(&a,&b);
    printf("\n%d n %d",a,b);

    return 0;
}
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

}