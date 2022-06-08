
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="Owais";
    char s2[]=" Amin";
    char s3[60];
    // puts(strcat(s1,s2));
    printf("The length of %s is =%d",s1,strlen(s1));
    printf("\nThe strcmp for s1,s2 is %d",strcmp(s1,s2));
    printf("\nThe length of %s is =%d",s2,strlen(s2));
    printf("\nThe reverse of %s is :",s1);
    puts(strrev(s1));    
    printf("The reverse of %s is :",s2);
    puts(strrev(s2));
    strcpy(s3,strcat(s1,s2));
    puts(s3);
    return 0;

}
