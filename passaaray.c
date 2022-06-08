/*
int avg(int arr[7])
Inside func,if you change the value of the array,it get reflected in the main array
*/

#include <stdio.h>
/* int func(int array[])
{
    for ( int i = 0; i < 4; i++)
    {
        printf("The value of %d is %d\n",i+1,array[i]);
    }
    array[0]=76;    //very important point
}*/
void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value of %d is %d\n", i + 1, *(ptr+i));
    }
    *(ptr + 2)=345;
}

    int main()
   {
        int arr[] = {23, 3, 34, 5};
        // printf("The value of array at elemnt 1 is %d\n",arr[0]);
        // func(arr);
        // printf("The value of array at elemnt 1 is %d",arr[0]);
        func2(arr);
        func2(arr);
        return 0;
    }
