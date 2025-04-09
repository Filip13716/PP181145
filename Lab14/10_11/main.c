#include <stdio.h>
#include <stdlib.h>

void shiftLeft(int n, int tab[]){
    int temp=tab[0];

    for(int i=0; i<n-1; i++) tab[i]=tab[i+1];

    tab[n-1]=temp;
}

void printTab(int n, int tab[]){
    for(int i=0; i<n-1; i++) printf("%d,", tab[i]);
    printf("%d\n", tab[n-1]);
}

int main()
{
    int tab[]={2,4,8,60};

    printTab(4, tab);

    shiftLeft(4, tab);
    printTab(4, tab);

    return 0;
}
