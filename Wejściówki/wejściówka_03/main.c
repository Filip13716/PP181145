//Wariant 224

#include <stdio.h>
#include <stdlib.h>

int n, sum=0;

int main()
{
    printf("Podaj n: ");
    scanf("%d", &n);

    while(n>0){
        sum+=n*n*n;
        n--;
    }

    printf("%d", sum);

    return 0;
}
