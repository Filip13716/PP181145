#include <stdio.h>
#include <stdlib.h>

int a,b;

int main()
{
    scanf("%d", &a);
    scanf("%d", &b);

    printf("%d", (a+b)*(a-b));

    return 0;
}
