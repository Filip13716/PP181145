#include <stdio.h>
#include <stdlib.h>

void findMaxValue(int tab[], int size){
    int max=tab[0];

    for(int i=1; i<size; i++){
        if(max<tab[i]) max=tab[i];
    }
    printf("%d\n", max);
}

int main()
{
    int tab[]={1,-8,20,9,-100};

    findMaxValue(tab, 5);

    return 0;
}
