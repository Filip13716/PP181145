#include <stdio.h>
#include <stdlib.h>

char znak1, znak2;

int main()
{
    scanf("%c", &znak1);
    scanf(" %c", &znak2);

    printf("Odwrotna kolejnosc: %c %c\n", znak2, znak1);
    return 0;
}
