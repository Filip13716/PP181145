//Wariant 141

#include <stdio.h>
#include <stdlib.h>

int napoj, naleznosc, wrzutka, reszta;

int main()
{
    system("chcp 65001");

    printf("Dost�pne opcje:\n1 - Woda (2 z�)\n2 - Sok (3 z�)\n3 - Kawa (4 z�)\n4 - Herbata (4 z�).\n\nKt�ry nap�j wybierasz?\nPodaj numer: ");
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

    printf("\nIle pieni�dzy wrzucasz? ");
    scanf("%d", &wrzutka);

    if(wrzutka<naleznosc){
        printf("Wrzucono za ma�o pieni�dzy!");
        return 1;
    }
    if(wrzutka==naleznosc){
        printf("Dzi�kujemy za zakup, prosz� odebra� sw�j nap�j.");
        return 0;
    }
    if(wrzutka>naleznosc){
        printf("Dzi�kujemy za zakup, prosz� odebra� sw�j nap�j i reszt� w wysoko�ci %d z�.", wrzutka-naleznosc);
        return 0;
    }
}
