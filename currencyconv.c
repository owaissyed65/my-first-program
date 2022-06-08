#include <stdio.h>
#include <conio.h>
int main()
{
    float saudiatopkr = 49.72, pkrtosaudia = 0.020, usdtopkr = 185.68, pkrtousd = 0.0054,kuwaitidinartopkr=604.90;
    float v1, v2;
    
    char input;

    while (1)
    {
        printf("Enter q to exit: \nEnter number for conversion of currency\n1.Saudia to pkr\n2.PKR to Saudia\n3.American Dollar to pkr\n4.Pkr to American Dollar\n5.Kuwati Dinar to PKr\n");
        scanf("%c", &input);
        switch (input)
        {
        case 'q':
            printf("Quitting the program");
            goto end;
            break;
        case '1':
            printf("Enter value to convert saudiRiyal to Pkr:");
            scanf("%f", &v1);
            v2 = v1 * saudiatopkr;
            printf("You convert saudi riyal %.2f to pakistani rupee %.2f", v1,v2);
            getch();
            break;
        case '2':
            printf("Enter value to convert Pkr to saudiriyal:");
            scanf("%f", &v1);
            v2 = v1 * pkrtosaudia;
            printf("You convert pakistani rupee %.2f to saudi riyal %.2f", v1,v2);
            getch();
            break;
        case '3':
            printf("Enter value to convert American Dollar to Pkr:");
            scanf("%f", &v1);
            v2 = v1 * usdtopkr ;
            printf("You convert American Dollar %.2f to pakistani rupee %.2f",v1, v2);
            getch();
            break;
        case '4':
            printf("Enter value to convert Pkr to American Dollar:");
            scanf("%f", &v1);
            v2 = v1 * pkrtousd;
            printf("You convert pakistani rupee %.2f to American Dollar %.2f",v1, v2);
            getch();
            break;
        case '5':
            printf("Enter value to convert kuwaiti Dinar to pkr:");
            scanf("%f", &v1);
            v2 = v1 * kuwaitidinartopkr;
            printf("You convert kuwaiti Dinar %.2f to pkr %.2f",v1, v2);
            getch();
            break;  

        default:
            break;
        }
    }

end:
    getch();
    return 0;
}
