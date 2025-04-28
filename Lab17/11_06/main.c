#include <stdio.h>
#include <stdlib.h>

void toLowerNew(char *txt){
    for(int i=0; i<length(txt); i++){
        if(*(txt+i)>='A' && *(txt+i)<='Z') *(txt+i)+=32;
    }
}

int length(char *txt){
    int i=0;

    while(*(txt+i) !='\0') i++;

    return i;
}

int main()
{
    char txt[] = "OlSzTYN";

    toLowerNew(txt);

    printf("%s\n", txt);

    return 0;
}
