#include<stdio.h>
#include<conio.h>
int main()
{
 int i;
 printf("Enter a positive Integer:");
 scanf("%d",&i);
if (i & 1)
{
    printf("%d is an odd number",i);
}
else
{
   printf("%d is an even number",i);
}
  return 0;  
}