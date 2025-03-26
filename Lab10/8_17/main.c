#include <stdio.h>
#include <stdlib.h>

void swapSign(float *ptr1, float *ptr2){
    if((*ptr1<0 && *ptr2<0) || (*ptr1>0 && *ptr2>0)){
        float plc=*ptr1;
        *ptr1=*ptr2;
        *ptr2=plc;
    }
}

int main()
{
    float a=10.05, b=20.1, c=-1.004, d=6.8;

    swapSign(&a,&b);
    swapSign(&c,&d);

    printf("%f, %f, %f, %f", a, b, c, d);

    return 0;
}
