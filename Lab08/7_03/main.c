#include <stdio.h>
#include <stdlib.h>

int calculateFactorial(n){

    int silnia=1;

    for(int i=1;i<=n;i++){
        silnia*=i;
    }

    return silnia;
}

int main()
{
    int liczba;

    printf("Podaj liczbe: ");
    scanf("%d", &liczba);

    printf("%d", calculateFactorial(liczba));

    return 0;
}
