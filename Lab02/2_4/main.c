#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a,b,c;

int main()
{
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    printf("%f", pow(abs(a)*abs(b)*abs(c), 1/3.0));

    return 0;
}
