#include <stdio.h>
#include <stdlib.h>

void copyMat(int n, int m, int tab[n][m], int tab1[n][m]){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            tab1[i][j]=tab[i][j];
        }
    }
}

void printt(int n, int m, int tab[n][m]){
    printf("----\n");

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d\t", tab[i][j]);
        }
        printf("\n");
    }

    printf("----\n");
}

int main()
{
    int tab[2][3]={{1,2,3},{4,5,6}}, tab1[2][3];

    copyMat(2,3,tab,tab1);

    printt(2,3,tab1);

    return 0;
}
