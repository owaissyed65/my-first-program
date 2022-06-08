#include<stdio.h>
#include<conio.h>
//#include<direct.h>
int main()
{
int h,m,s;


printf("enter your time in hours");
scanf("%d",&h);
printf("enter your time in minutes");
scanf("%d",&m);
printf("enter your time in seconds");
scanf("%d",&s);
for (h;h<24;h++)
{
   for (m;m<60;m++)
   {
      for (s;s<60;s++)
      {
        printf("\n%d:%d:%d\n",h,m,s);
        //delay(1000);  
      }
   }
}

    return 0;
    


}
