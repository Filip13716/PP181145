#include <stdio.h>
#include <stdlib.h>

int sum(x,y){
    return x+y;
}

int sumVals(int *p1, int *p2){
    return *p1 + *p2;
}

void addPtr(int *x, int *y, int *z){
    *z=*x+*y;
}

int main()
{
    int x=2, y=4;
    printf("%d\n", sum(x,y));
    printf("%d\n", sumVals(&x, &y));
    int z;
    addPtr(&x, &y, &z);
    printf("%d\n", z);

    return 0;
}
