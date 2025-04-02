#include <stdio.h>
#include <stdlib.h>

void applyFunction(int (*func)(int), int start, int end){
    for(start; start<=end; start++){
        printf("%d\n", foo(start));
    }
}

int foo(int arg){
    return arg*arg;
}

int main()
{
    applyFunction(foo,0,5);

    return 0;
}
