#include <stdio.h>
#include <stdlib.h>

float average(int n, int tab[]){
    int sum=0;

    for(int i=0; i<n; i++) sum+=tab[i];

    return sum/(n*1.0);
}

int main()
{
    int tab[]={1,10,50,-20,7,13,-22}, n=7;

    printf("%f", average(n, tab));

    return 0;
}
