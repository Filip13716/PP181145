#include <stdio.h>
#include <stdlib.h>

float linFuncVal(const float *a, float const * b, const float *x){
    float l1=*a, l2=*b, l3=*x;

    return  l1*l3+l2;
}

int main()
{
    const float a=2.0;
    float b=1.5;
    const float x=4.1;

    printf("%f", linFuncVal(&a,&b,&x));

    return 0;
}
