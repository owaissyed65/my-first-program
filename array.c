/*  1>  An array is an collection of data items of the same type.
    2>  items are stored at contigious memory location.
    3>  It can also store the collection of derived data type such as pointer,structure etc.
    4>  A one dimension array is like a list.
    5>  A two dimensional array is like a table.
    5>  The c language places no limits on the number of dimensions in an array.
    7> Some text refers to one dimensional arrays as vectors,two-dimensional arrays as matrices,and we use the general
      terms arrays when the number of dimension is unspecified or unimportant.
Why do we need arrays?
    code that use arrays is sometimes more organized and readable.
    if you were to store the marks in a test of 56 students,56 variable will make program look cluttered an messy.
    solution to tihs is arrays!
    we can create arrays of integers and store the consecutive marks corresponding to the roll number in arrays.
Advanatage of arrays
    it is used to represent multiple data items of same type by using only single name.
    accessing an item in a given arrays is very fast.
    2-dimensional arrays makes it easy in matematical application as it is used to represent matrix

Properties of arrays
    Data in aarys is stored in contigous memory in locations
    Each element of an arrasy is of same size
    Any element of the array with given index can be ccessed vert quickly by using its address which can be
    calculated using the base address and the index.
*/

#include <stdio.h>
#include <conio.h>
int main()
{
    int marks[4]={78,99,100,555};

    // marks[0]=34;
    printf("The marks of student 1 is %d\n",marks[0]);
    printf("The marks of student 2 is %d\n",marks[1]);
    printf("The marks of student 3 is %d\n",marks[2]);
    printf("The marks of student 4 is %d",marks[3]);

    return 0;
}
