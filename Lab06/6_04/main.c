#include <stdio.h>
#include <stdlib.h>

int n, silnia=1;

int main()
{
    system("chcp 65001");

    printf("Podaj liczb�m kt�rej silnia ma by� wyliczona: ");
    scanf("%d", &n);

    if(n<0){
        printf("Hej! Twoja liczba powinna by� nieujemna!");
        return 1;
    }

    for(int i=1; i<=n; i++) silnia*=i;

    printf("Silnia %d to: %d.", n, silnia);

    return 0;
}
