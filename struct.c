#include<stdio.h>
#include<string.h>

void name();

struct student 
{
    int marks;
    int id;
    char name[];

};
struct student owais,huzaifa,bilal;
int main()
{
owais.id=1;
huzaifa.id=2;
bilal.id=3;
owais.marks=44;
huzaifa.marks=34;
bilal.id=45;
strcpy(owais.name,"OWais is a good Boy");
// printf("The marks of owais is %d",owais.marks);
// printf("\n%s",owais.name);
name();
    return 0;
}

void name()
{
    printf("%s",owais.name);
}