#include <stdio.h>
#include <stdlib.h>

int rok;

int main()
{
    system("chcp 65001");

    scanf("%d", &rok);

    if(rok%100==0){
        if(rok%400==0){
            printf("Twój rok jest przestêpny.");
            return 0;
        }
        else{
            printf("Twój rok nie jest przestêpny.");
            return 0;
        }
    }
    if(rok%4==0){
            printf("Twój rok jest przestêpy.");
            return 0;
        }

    printf("Twój rok nie jest przestêpny.");
    return 0;
}
