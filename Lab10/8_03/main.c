#include <stdio.h>
#include <stdlib.h>

void copyInt(int x, int *w){
    *w=x;
}

int main()
{
    int x=24267, w;

    copyInt(x, &w);
    printf("%d\n", w);

    return 0;
}
