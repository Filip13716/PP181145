#include <stdio.h>
#include <stdlib.h>

void swap(int *ptr1, int *ptr2){
    int plc=*ptr1;
    *ptr1=*ptr2;
    *ptr2=plc;
}

int main()
{
    int a=15, b=4;

    swap(&a, &b);

    printf("%d, %d", a, b);

    return 0;
}
