#include <stdio.h>
#include <stdlib.h>

int minPtr(int *a, int *b, int *c){
    if(*a>*b){
        if(*a>*c) return *a;
        return *c;
    }
    if(*b>*c) return *b;
    return *c;
}

int main()
{
    int a=10, b=20, c=4, d=1;

    printf("%d\n", minPtr(&a, &c, &d));
    printf("%d\n", minPtr(&a, &b, &c));
    printf("%d\n", minPtr(&a, &d, &b));
    printf("%d\n", minPtr(&d, &a, &b));

    return 0;
}
