#include <stdio.h>
#include <stdlib.h>

void strNcopy(char *nap1, char *nap2, int n){
    if(length(nap1)<n) n=length(nap1);

    for(int i=0; i<n; i++) *(nap2+i)=*(nap1+i);

    *(nap2+n)='\0';
}

int length(char *txt){
    int i=0;

    while(*(txt+i) !='\0') i++;

    return i;
}

int main()
{
    char a[4],b[9];

    strNcopy("Wielblad", a, 3);
    strNcopy("Wielblad", b, 9999);

    printf("%s\n", a);
    printf("%s\n", b);

    return 0;
}
