#include <stdio.h>
#include <conio.h>
/* Pointer
1. Variable which stores the address of another variable.
2. can be of type int,char,functiom,orany other pointer.
3. size depends on the architectures .Ex 2 bytes for 32 bit
4. pointer in c programming language can be declared using *(Asterik symbol)
INTUITIVE ANALOGY
int a=73 ->numaish b(saddar)=*a(numaish);
b point to a
&return the address of a
* is the dereference operator(also called indirection operator)used to give the value
at a given address
5. A pointer that is not assigned any value but null is known as the null pointer
6. In computer programming a null pointer is a pointer that does not point to any object
or function
7. We can use it to initialize a pointer variable when that pointer variable isn't assigned
any valid memory address yet
int *ptr=NULL
*/
int main()
{
    int a = 76;
    int *ptra = &a;
    int *ptr=NULL ;
    printf("The address of ptra is %p", &ptra);
    printf("\nThe value of a is %d", *ptra);
    printf("\nThe garbage value is %p",ptr);
    printf("\nThe address of a is %d", ptra);
    printf("\nThe address of a is %d",&a);
    return 0;
}
