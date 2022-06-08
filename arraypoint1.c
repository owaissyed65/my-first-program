#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[] = {44,54,63,47,29,38,10,20,30};
    printf("Value at position of element 4 is %d\n",arr[3]);
    printf("The address of first elements of the array is %d\n",&arr[0]);
    printf("The address of first elements of the array is %d\n",arr);
    printf("The address of second elements of the array is %d\n",&arr[1]);
    printf("The address of second elements of the array is %d\n",arr+1);       
     
    //  printf("Value at position of element 4 is %d\n",arr[3]);*(
    printf("The Value at address of first elements of the array is %d\n",*(&arr[0]));
    printf("The Value at address of first elements of the array is %d\n",*(arr));
    printf("The Value at address of first elements of the array is %d\n",arr[0]);
    printf("The Value at address of second elements of the array is %d\n",*(&arr[1]));
    printf("The Value at address of second elements of the array is %d\n",*(arr+1));

    return 0;

}
