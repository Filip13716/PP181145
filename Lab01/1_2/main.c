#include <stdio.h>
#include <stdlib.h>

float l1, l2;

int main(){
    printf("Podaj pierwsza liczbe zmiennoprzecinkowa: ");
    scanf("%f", &l1);

    printf("Podaj druga liczbe zemiennoprzenikowa: ");
    scanf("%f", &l2);

    printf("Roznica tych liczb to: %f", l1-l2);

    return 0;
}
