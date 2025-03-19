#include <stdio.h>
#include <stdlib.h>

void countFunctionCalls(){
    static int licznik=0;
    licznik++;
    printf("Liczba wywolan %d\n", licznik);
}

int main()
{
    countFunctionCalls();
    countFunctionCalls();
    countFunctionCalls();
    countFunctionCalls();
    countFunctionCalls();
    countFunctionCalls();
    return 0;
}
