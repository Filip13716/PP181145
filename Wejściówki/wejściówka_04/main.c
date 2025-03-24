//Wariant 425

#include <stdio.h>
#include <stdlib.h>

int modab(x,y){
    int a=x%8, b=y%8;

    if(a<b) return 1;
    return 0;
}

int main()
{
    int a,b;
    printf("Podaj liczbe a: ");
    scanf("%d", &a);
    printf("Podaj biczbe b: ");
    scanf("%d", &b);

    printf("%d", modab(a,b));

    return 0;
}
