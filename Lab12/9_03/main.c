#include <stdio.h>
#include <stdlib.h>

int func(int (*f1)(int), int (*f2)(int), int unsigned n){
    for(int i=0; i<=n; i++){
        int a=f1(i);
        int b=f2(i);

        if((a<0 && b>0) || (a>0 && b<0)) return 0;
    }
    return 1;
}

int foo(int n){
    if(n%2!=0) return -1;
    return 1;
}

int foo1(int n){
    return n*2;
}

int main()
{
    printf("%d", func(foo, foo1, 10));
    return 0;
}
