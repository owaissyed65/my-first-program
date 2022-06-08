#include <stdio.h>
#include <conio.h>
int main()
{
    int i, sum = 0, n, marks[10];
    float average;
    printf("How many number you want to store:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nAdd number in of index %d marks:",i+1);
        scanf("%d",&marks[i]);
       // printf("\nYou stored this number in index %d marks data type:%d",i+1,marks[i]);    
        sum+=marks[i];
    }
    average=sum/n;
    printf("\nThe average of given variable in arrays is %.2f",average);
    return 0;
}