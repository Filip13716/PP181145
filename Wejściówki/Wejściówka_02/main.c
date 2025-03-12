//Wariant 141

#include <stdio.h>
#include <stdlib.h>

int napoj, naleznosc, wrzutka, reszta;

int main()
{
    system("chcp 65001");

    printf("Dostêpne opcje:\n1 - Woda (2 z³)\n2 - Sok (3 z³)\n3 - Kawa (4 z³)\n4 - Herbata (4 z³).\n\nKtóry napój wybierasz?\nPodaj numer: ");
    scanf("%d", &napoj);

    switch(napoj){
        case 1:
            naleznosc=2;
            break;
        case 2:
            naleznosc=3;
            break;
        case 3:
            naleznosc=4;
            break;
        case 4:
            naleznosc=4;
            break;
        default:
            printf("Nie mamy takiego napoju, przepraszamy.");
            return 1;
    }

    printf("\nIle pieniêdzy wrzucasz? ");
    scanf("%d", &wrzutka);

    if(wrzutka<naleznosc){
        printf("Wrzucono za ma³o pieniêdzy!");
        return 1;
    }
    if(wrzutka==naleznosc){
        printf("Dziêkujemy za zakup, proszê odebraæ swój napój.");
        return 0;
    }
    if(wrzutka>naleznosc){
        printf("Dziêkujemy za zakup, proszê odebraæ swój napój i resztê w wysokoœci %d z³.", wrzutka-naleznosc);
        return 0;
    }
}
