#include <stdio.h>
#include <stdlib.h>

struct Airplane{
    char * model;
    int engines;
};

int lessEngines(struct Airplane tab[], int n){
    int temp=tab[0].engines;

    for(int i=1; i<n; i++){
        if(temp>tab[i].engines) temp=tab[i].engines;
    }

    return temp;
}

int main()
{
    struct Airplane a1={"Boing", 70};
    struct Airplane a2={"Aoing", 60};
    struct Airplane a3={"Coing", 50};
    struct Airplane a4={"Doing", 2};

    struct Airplane tab[]={a1, a2, a3, a4};

    printf("Najmniejsza liczba silnikow to: %d", lessEngines(tab, 4));

    return 0;
}
