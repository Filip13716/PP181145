#include <stdio.h>
#include <stdlib.h>

void copyArr2D(int n, int m, int **tab, int **tab1){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            *(*(tab1+i)+j)=*(*(tab+i)+j);
        }
    }
}

void printt(int n, int m, int **tab){
    printf("----\n");

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d\t", *(*(tab+i)+j));
        }
        printf("\n");
    }

    printf("----\n");
}

int main()
{
    int **tab=malloc(2*sizeof(int*));
    *tab=malloc(3*sizeof(int));
    *(tab+1)=malloc(3*sizeof(int));
    *(*tab) =    1; *(*tab+1)=      2; *(*tab+2)=    3;
    *(*(tab+1))= 4; *(*(tab+1)+1) = 5; *(*(tab+1)+2)=6;

    int **tab1=malloc(2*sizeof(int*));
    *tab1=malloc(3*sizeof(int));
    *(tab1+1)=malloc(3*sizeof(int));

    copyArr2D(2,3,tab,tab1);

    printt(2,3,tab1);

    free(*tab);
    free(*(tab+1));
    free(tab);

    free(*tab1);
    free(*(tab1+1));
    free(tab1);
    return 0;
}
