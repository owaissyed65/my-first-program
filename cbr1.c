#include<stdio.h>
void changevalue(int *n1,int *n2)
{
    int temp;
   temp=*n1;
   *n1=*n1+*n2;
   *n2=temp-*n2;
}
int main(int argc, char const *argv[])
{
    int x=34,y=23;
    printf("Before running the function a is =%d and b is =%d",x,y);
    changevalue(&x,&y);
    printf("\nAfter running the function a is =%d and b is=%d",x,y);
    return 0;
}
