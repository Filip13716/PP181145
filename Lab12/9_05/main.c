#include <stdio.h>
#include <stdlib.h>

int modifyAndSum(int (*modifier)(int), int number1, int number2){
    return modifier(number1)+modifier(number2);
}

int foo(int n){
    return n*(-1)+2;
}

int main()
{
    printf("%d\n", modifyAndSum(foo, 10, 20));
    return 0;
}
