#include <stdio.h>
#include <stdlib.h>

int rok;

int main()
{
    system("chcp 65001");

    scanf("%d", &rok);

    if(rok%100==0){
        if(rok%400==0){
            printf("Tw�j rok jest przest�pny.");
            return 0;
        }
        else{
            printf("Tw�j rok nie jest przest�pny.");
            return 0;
        }
    }
    if(rok%4==0){
            printf("Tw�j rok jest przest�py.");
            return 0;
        }

    printf("Tw�j rok nie jest przest�pny.");
    return 0;
}
