#include <stdio.h>
#include <stdlib.h>

void strCopyNew(char *txt, char *txt1){
    for(int i=0; i<length(txt); i++) *(txt1+i)=*(txt+i);
}

int length(char *txt){
    int i=0;

    while(*(txt+i) !='\0') i++;

    return i;
}

int main()
{
    char a[]="pies", b[5];

    strCopyNew(a,b);

    printf("%s\n", b);

    return 0;
}
