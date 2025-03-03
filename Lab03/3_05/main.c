#include <stdio.h>
#include <stdlib.h>

int liczba1, liczba2;

int main()
{
    scanf("%d", &liczba1);
    scanf("%d", &liczba2);

    if((liczba1+liczba2)%2!=0){
        printf("Suma twoich liczb jest nieparzysta.");
        return 0;
    }

    printf("Suma twoich liczb jest parzysta.");
    return 0;
}
