#include <stdio.h>
#include <stdlib.h>

int ocena;

int main()
{
    system("chcp 65001");

    printf("Podaj ocenê od 1 do 5: ");
    scanf("%d", &ocena);

    switch(ocena){
        case 1:
            printf("Niedostateczny");
            break;

        case 2:
            printf("Dopuszczaj¹cy");
            break;

        case 3:
            printf("Dostateczny");
            break;

        case 4:
            printf("Dobry");
            break;

        case 5:
            printf("Bardzo dobry");
            break;

        default:
            printf("Za du¿a liczba!!!");
            break;

    }

    return 0;
}
