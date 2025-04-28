#include <stdio.h>
#include <stdlib.h>

int countVow(char txt[]){
    char vowels[]="aeiouyAEIOUY";
    int counter=0;

    for(int i=0; txt[i]!=0; i++){
        for(int j=0; vowels[j]!=0;j++){
            if(txt[i]==vowels[j]){
                counter++;
                break;
            }
        }
    }
    return counter;
}

int main()
{
    printf("%d\n", countVow("Olsztyn"));
    return 0;
}
