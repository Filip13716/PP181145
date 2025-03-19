#include <stdio.h>
#include <stdlib.h>

int sumNumbers(n){
    int suma=0;

    for(int i=1;i<=n;i++) suma+=i;

    return suma;
}

int main()
{
    int liczba=0;

    printf("Podaj liczbe: ");
    scanf("%d", &liczba);

    printf("%d", sumNumbers(liczba));

    return 0;
}
