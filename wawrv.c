#include <stdio.h>
#include <conio.h>
float percentage(float a,float b);
int main()
{
    
    
    float p1=percentage(45,100);
   printf("%.1f", p1);
   float p2 = percentage(250, 600);
    printf("\n%.1f", p2);
    return 0;
}
float percentage(float a,float b)
{
    
   float perc = (a / b) * 100;
    return perc;
}