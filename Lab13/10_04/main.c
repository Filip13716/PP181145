#include <stdio.h>
#include <stdlib.h>

void copyArr(int n, int *tab1, int *tab2){
    for(int i=0; i<n; i++) *(tab2+i)=*(tab1+i);
}

int main()
{
    int n=3;

    int *tab1=malloc(3*sizeof(int));
    int *tab2=malloc(3*sizeof(int));

    *(tab1+0)=3;
    *(tab1+1)=2;
    *(tab1+2)=1;

    copyArr(n, tab1,tab2);

    printf("%d\n%d\n%d\n", *tab2,*(tab2+1), *(tab2+2));

    free(tab1);
    free(tab2);

    return 0;
}
