#include <stdio.h>
#include <stdlib.h>

int calculateFactorialRecursively(n){
    if(n==1) return 1;
    return calculateFactorialRecursively(n-1)*n;
}

int main()
{
    printf("%d\n", calculateFactorialRecursively(1));
    printf("%d\n", calculateFactorialRecursively(2));
    printf("%d\n", calculateFactorialRecursively(3));
    printf("%d\n", calculateFactorialRecursively(4));
    printf("%d\n", calculateFactorialRecursively(5));

    return 0;
}
