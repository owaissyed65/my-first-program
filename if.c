#include<stdio.h>
int main()
{
 int age;
 
 printf("enter your age\n");
 scanf("%d",&age);
 printf("you have entered %d as your age",age);
 if (age>=18) 
 {
   printf("\nyou can vote");

 }
 else
  {
    printf("\nyou cant vote");
  }
    return 0;
} 