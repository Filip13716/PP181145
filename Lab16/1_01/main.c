#include <stdio.h>
#include <stdlib.h>

int length(char *txt){
    int i=0;

    while(*(txt+i) !='\0') i++;

    return i;
}

int main()
{
    char t1[]="Olsztyn";
    printf("%d\n", length(t1));
    return 0;
}
