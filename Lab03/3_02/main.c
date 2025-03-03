#include <stdio.h>
#include <stdlib.h>

int liczba1, liczba2;

int main()
{
    system("chcp 65001");

    printf("Podaj dwie liczby.\n");
    scanf("%d", &liczba1);
    scanf("%d", &liczba2);

    if(liczba1>liczba2) printf("Wiêksza liczba to: %d", liczba1);
    else printf("Wiêksza liczba to: %d", liczba2);

    return 0;
}
