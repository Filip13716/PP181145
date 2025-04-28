#include <stdio.h>
#include <stdlib.h>

int cmpStrNew(char *txt, char *txt2){
    if(length(txt)!=length(txt2)) return 0;

    for(int i=0; i<length(txt); i++){
        if(*(txt+i)!=*(txt2+i)) return 0;
    }

    return 1;
}

int length(char *txt){
    int i=0;

    while(*(txt+i) !='\0') i++;

    return i;
}

int main()
{
    printf("%d\n", cmpStrNew("kot", "pies"));
    printf("%d\n", cmpStrNew("kot", "kot"));

    return 0;
}
