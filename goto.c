#include <stdio.h>
int main()
{
    /* top :
    printf("\nwe are inside label");
    goto end;
    printf("i am owais");         //issny yeh ni prha qk woh end me chlygya
    goto top;
    end :
    printf("\nwe are at end");
    */
    int i, j, num;
    for (i = 0; i <= 8; i++)
    {
        printf("%d\n", i);
        for (j = 0; j < 7; j++)
        {
            printf("enter the number\nenter 0 to exit");
            scanf("%d", &num);
            if (num == 0)
            {
             goto end;
            }

            
                
            
        }
    }
end :
    return 0;
}
