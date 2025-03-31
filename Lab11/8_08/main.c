#include <stdio.h>
#include <stdlib.h>

void sumToPtr(int *a, int *b, int *c){
    *c=*a+*b;
}

int main()
{
    const int a=25, b=-10;
    int c;

    sumToPtr(&a, &b, &c);

    printf("%d", c);

    return 0;
}
