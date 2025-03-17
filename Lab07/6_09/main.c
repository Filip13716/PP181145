#include <stdio.h>
#include <stdlib.h>

int n,a,a_1,a_2, counter=0;

int main()
{
    printf("Ile liczb wprowadzisz? ");
    scanf("%d", &n);

    if(n<3){
        printf("B³¹d! Musisz wprowadziæ conajmniej trzy liczby!");
        return -1;
    }

    printf("Podaj a1: ");
    scanf("%d", &a_1);
    printf("Podaj a2: ");
    scanf("%d", &a);
    printf("Podaj a3: ");
    scanf("%d", &a_2);

    for(int i=n-2; i>0; i--){
        if(a<((a_1+a_2)/2)) counter+=1;

        a_1=a;
        a=a_2;

        printf("Podaj kolejny wyraz: ");
        scanf("%d", &a_2);
    }

    printf("Takich liczb jest: %d", counter);

    return 0;
}
