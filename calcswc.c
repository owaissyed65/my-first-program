#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    float a,b;
    char op,yn;
    // clrscr();
    top:
    printf("value of v1 = ");
    scanf("%f", &a);
    printf("\nvalue of v2 =");
    scanf("%f", &b);
    printf("\nEnter operator: ");
    scanf("%c", &op);
    op = getche();
    switch (op)
    {
    case '+':
      //  // v = v1 + v2;
        printf("\nResult of v1+v2 = %.2f", a+b);
        break;
    case '-':
     //   // v = v1 - v2;
        printf("\nResult of v1-v2 = %.2f", a-b);
        break;

    case '*':
        printf("\nResult of v1*v2 = %.2f", a*b);
        break;
    case '/':
    
        printf("\nResult of v1/v2 = %.2f", a/b);
        break;
    default:
        goto mid;
    }
    mid:
    printf("\nDo you want to again calculate:");
    scanf("%s",&yn);
    if (yn=='y'||yn=='Y')
    {
        goto top;
    }
    else 
    {
        exit (0);
    }
}
