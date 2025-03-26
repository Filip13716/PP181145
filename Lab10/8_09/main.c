#include <stdio.h>
#include <stdlib.h>

void sqrCopy(int *x, int *y){
    int z=*x;
    *y = z*z;
}

int main()
{
    const int x=13;
    int y;

    sqrCopy(&x, &y);
    printf("%d", y);
    return 0;
}
