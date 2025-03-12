#include <stdio.h>
#include <stdlib.h>

int n, silnia=1;

int main()
{
    system("chcp 65001");

    printf("Podaj liczbêm której silnia ma byæ wyliczona: ");
    scanf("%d", &n);

    if(n<0){
        printf("Hej! Twoja liczba powinna byæ nieujemna!");
        return 1;
    }

    for(int i=1; i<=n; i++) silnia*=i;

    printf("Silnia %d to: %d.", n, silnia);

    return 0;
}
