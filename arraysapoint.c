#include<stdio.h>
#include<conio.h>
/* 
There are four arithematic operators that can be used on pointer
++
-- 
+
-
ARRAYS AND POINTERS
1. consider the following declaration:int arr[10]
2. What is the type of arr?
3. However,arr,by itself,without any index subscripting,can be assigned to an integer pointer.
4. What type does arr[i] have?
5.arr[i] ==*(arr+i)
6. if arr is a pointer to arr[0] then arr +i is a pointer to arr[i]
*/


int main()
{
    int a =34;
    int *ptra=&a;
    printf("%d\n",ptra);
    printf("%d\n",ptra+1);
    ptra++;

    printf("%d\n",ptra);
    ptra++;
    printf("%d\n",ptra);
    printf("%d",ptra-2);

        return 0;
}