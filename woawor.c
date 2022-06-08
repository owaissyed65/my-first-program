#include <stdio.h>
#include <conio.h>
void star_pattern();
int main()
{
  // int i;
star_pattern();
  return 0;
}
void star_pattern()
{
  int a,i;
  printf("How many stars you want:");
  scanf("%d",&a);
  for (i=0;i<a;i++ )
  {
    printf("*\n");
  } 
}
