#include <stdio.h>
#include <stdlib.h>

void absVal(int *n){
    if(*n<0) *n *= -1;
}

int main()
{
    int a=10, b=-20, c=0, d=-121;

    absVal(&a);
    absVal(&b);
    absVal(&c);
    absVal(&d);

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", d);

    return 0;
}
