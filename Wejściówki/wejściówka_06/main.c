//Wariant 13M

#include <stdio.h>
#include <stdlib.h>

void cubeCopy(double *a, double *b){
    *b=(*a)*(*a)*(*a);
}

int main()
{
    const double a=0.5;
    double b=0;

    printf("a: %f, b: %f\n", a,b);

    cubeCopy(&a, &b);

    printf("a: %f, b: %f\n", a,b);

    return 0;
}
