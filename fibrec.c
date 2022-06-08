#include <stdio.h>
int fib_recursion(int n);
int fib_iteration(int num);
int main()
{
    int num;
    printf("Enter the index to get fibonacci series:");
    scanf("%d", &num);
    printf("The value of fibonacci number at position no %d using iterative approach is %d\n", num, fib_iteration(num));
    printf("The value of fibonacci number at position no %d using recursive approach is %d\n", num, fib_recursion(num));
    return 0;
}
int fib_recursion(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return fib_recursion(n - 1) + fib_recursion(n - 2);
    }
}

int fib_iteration(int n)
{
    int a = 0;
    int b = 1;
    for (int i = 0; i < n-1; i++)
    {
        b = a + b;
        a = b - a;
    }

    return a ;
}