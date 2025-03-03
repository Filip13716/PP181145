#include <stdio.h>
#include <stdlib.h>

int liczba;

int main()
{
    system("chcp 65001");

    printf("Prosze podaj swoj¹ liczbê: ");
    scanf("%d", &liczba);

    if(liczba<0) printf("Twoja liczba jest ujemna.");
    else if(liczba==0) printf("Twoja liczba to zero");
    else printf("Twoja liczba jest dodatnia");

    return 0;
}
