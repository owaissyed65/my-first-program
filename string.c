#include<stdio.h>
void printstr(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }

}
int main()
{
    //char str[6]="Owais";
   // char str[6]={'O','w','a','i','s','\0'};
    char str[50];
    printf("Enter your name");
    gets(str);
    puts(str);
    //printstr(str);
    
    return 0;
}
