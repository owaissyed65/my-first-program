#include <stdio.h>
#include <conio.h>
int main()
{
    char input;
    float kmstomiles = 0.621371;
    float inchestofoot = 0.083333;
    float cmtoinches = 0.393701;
    float poundtokgs = 0.453592;
    float inchestometers = 0.0254;
    float first, second;
    while (1)
    {
        printf("Enter the input character. q to quit.\n 1>Km to miles \n 2>inchestofoots\n 3>cm to inches\n 4>poundtokgs\n 5>inchestometers\n");
        scanf("%c", &input);

        switch (input)
        {
        case 'q':
            printf("Quitting the program...");

            goto end;

            break;
        case '1':
            printf("Enter quantity in term of first unit:");
            scanf("%f", &first);
            second = first * kmstomiles;
            printf(" %.2f kms is equal to %.2f miles \n", first, second);
            getch();
            break;
        case '2':
            printf("Enter quantity in term of first unit:");
            scanf("%f", &first);
            second = first * inchestofoot;
            printf("%.2f inches is equal to %.2f foot \n", first, second);
            getch();
            break;
        case '3':
            printf("Enter quantity in term of first unit:");
            scanf("%f", &first);
            second = first * cmtoinches;
            printf("%.2f cms is equal to %.2f inches \n", first, second);
            getch();
            break;
        case '4':
            printf("Enter quantity in term of first unit:");
            scanf("%f", &first);
            second = first * poundtokgs;
            printf("%.2f pounds is equal to %.2f kgs \n", first, second);
            getch();
            break;
        case '5':
            printf("Enter quantity in term of first unit:");
            scanf("%f", &first);
            second = first * inchestometers;
            printf("%.2f inches is equal to %.2f meters \n", first, second);
            getch();
            break;

        default:

            break;
        }
    }

end:
    printf("\n Press any key to Exit..");
    getch();
    return 0;
}