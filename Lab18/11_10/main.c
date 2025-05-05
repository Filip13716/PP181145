#include <stdio.h>
#include <stdlib.h>

void strConcat(char * txt1, char * txt2, char *txt3){
    int a=length(txt1), b=length(txt2);

    for(int i=0; i<a; i++){
        *(txt3+i)=*(txt1+i);
    }
    for(int j=0; j<=b; j++){
        *(txt3+(j+a-1))=*(txt2+j);
    }
}

int length(char *txt){
    int i=0;

    while(*(txt+i) !='\0') i++;

    return i;
}

int main()
{
    char txt1[]="Olsz", txt2[]="tyn", txt3[8];

    strConcat(txt1, txt2, txt3);

    printf("%s\n", txt3);

    return 0;
}
