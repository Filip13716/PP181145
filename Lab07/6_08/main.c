#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,a_1,a_2, count=0;

    printf("Podaj a1: ");
    scanf("%d", &a);

    printf("Podaj a2: ");
    scanf("%d", &a_1);

    printf("Podaj a3: ");
    scanf("%d", &a_2);

    for(int i=0;i<7;i++){
        if(a_1<((a+a_2)/2)) count++;

        a_1=a;
        a=a_2;

        printf("Podaj kolejny wyraz: ");
        scanf("%d", &a_2);
    }

    printf("Takich wyrazow jest: %d", count);

    return 0;
}
