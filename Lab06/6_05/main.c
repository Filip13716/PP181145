#include <stdio.h>
#include <stdlib.h>

int n1, n2, sum, n=3;

int main()
{
    printf("1\n1\n");

    n1=1;
    n2=1;

    while(n<=10){
        sum=n1+n2;
        printf("%d\n", sum);
        n1=n2;
        n2=sum;
        n++;
    }
    return 0;
}
