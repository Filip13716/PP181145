#include <stdio.h>
#include <stdlib.h>

void toUpperNew(char *txt){
    for(int i=0; i<length(txt); i++){
        if(*(txt+i)>='a' && *(txt+i)<='z') *(txt+i)-=32;
    }
}

int length(char *txt){
    int i=0;

    while(*(txt+i) !='\0') i++;

    return i;
}

int main()
{
    char txt[] = "olsztyN";

    toUpperNew(txt);

    printf("%s\n", txt);

    return 0;
}
