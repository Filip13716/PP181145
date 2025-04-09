#include <stdio.h>
#include <stdlib.h>

int shiftLeft(int n, int *tab){
    int *tab2 = malloc(n*sizeof(int));

    for(int i=0; i<n-1; i++) *(tab2+i)=*(tab+i+1);

    *(tab2+n-1)=*tab;

    return tab2;
}

void printTab(int n, int *tab){
    for(int i=0; i<n-1; i++) printf("%d,", *(tab+i));
    printf("%d\n", *(tab+n-1));
}

int main()
{
    int *tab = malloc(5*sizeof(int));

    *tab=3;
    *(tab+1)=-2;
    *(tab+2)=7;
    *(tab+3)=-8;
    *(tab+4)=4;

    printTab(5, tab);

    int *tab2=shiftLeft(5,tab);

    printTab(5, tab2);

    return 0;
}
