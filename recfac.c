#include <stdio.h>
#include <conio.h>
int factorial(int number);
/*   recursion function is a process when function calls a copy of itsself to work on a similar problem        */
int main()
{
    int n, num;
    printf("Enter the number you want the factorial of:");
    scanf("%d", &num);
    n = factorial(num);
    printf("\nThe factorial of %d is %d\n", num, n);
    return 0;
}
int factorial(int number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }
    else
    {
        return (number + factorial(number - 1));
    }
}