#include <stdio.h>
#include <stdlib.h>

int i, a, wynik;

int main()
{
    scanf("%d", &a);

    for(i=a; i<a+3; i++){
        wynik+=i;
    }

    printf("%d", wynik);

    return 0;
}
