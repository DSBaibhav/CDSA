#include <stdio.h>
int main()
{
    char input;
    float ktoM=0.621371;
    float itoF=0.083333;
    float cmstoI=0.393700;
    float ptokgs=0.453592;
    float ItoMeters=0.0254;

    while(1)
    { 
        printf("Enter the input character,q to quit\n  1. Kilometers to Miles\n  2. Inches to Feet\n  3. Centimeters to Inches\n  4. Pounds to Kilograms\n  5. Inches to Meters\n");
        scanf(" %c",&input);
        switch(input)
        {
            case 'q':
            {
                printf("Exiting the program\n");
                goto end;
                break;
            }
            case '1':
            {
                float km;
                printf("Enter the kilometers: ");
                scanf("%f",&km);
                printf("The miles are: %f\n",km*ktoM);
                break;
            }
            case '2':
            {
                float inch;
                printf("Enter the inches: ");
                scanf("%f",&inch);
                printf("The foot are: %f\n",inch*itoF);
                break;
            }
            case '3':
            {
                float cm;
                printf("Enter the centimeters: ");
                scanf("%f",&cm);
                printf("The inches are: %f\n",cm*cmstoI);
                break;
            }
            case '4':
            {
                float pound;
                printf("Enter the pounds: ");
                scanf("%f",&pound);
                printf("The kilograms are: %f\n",pound*ptokgs);
                break;
            }
            case '5':
            {
                float inch;
                printf("Enter the inches: ");
                scanf("%f",&inch);
                printf("The meters are: %f\n",inch*ItoMeters);
                break;
            }
            default:
            {
                printf("Invalid input, please try again.\n");
                break;
            }
        }

    }
    end:
    return 0;
}

