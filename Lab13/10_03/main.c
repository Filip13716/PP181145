#include <stdio.h>
#include <stdlib.h>

int sumSquares(int n, int tab[]){
    int sum=0;

    for(int i=0; i<n; i++) sum+=(tab[i]*tab[i]);

    return sum;
}

int main()
{
    int tab[]={13,7,16}, n=3;

    printf("%d", sumSquares(n,tab));

    return 0;
}
