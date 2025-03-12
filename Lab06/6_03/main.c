#include <stdio.h>
#include <stdlib.h>

int n=0,sum_p,sum_n;

int main()
{
    do{
        scanf("%d", &n);

        if(n<0) sum_n+=n;
        else sum_p+=n;
    }
    while(n!=0);

    printf("Suma liczb pozytywnych: %d; suma liczb negatywnych: %d", sum_p, sum_n);

    return 0;
}
