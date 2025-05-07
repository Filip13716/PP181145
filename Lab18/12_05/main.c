#include <stdio.h>
#include <stdlib.h>

void copyMat(int n, int m, int tab1, int tab2){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            tab1[i][j]=tab2[i][j];
        }
    }
}

void printT(int n, int m, int tab[n][m]){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d\t", tab[n][m]);
        }
        printf("\n");
    }

    printf("---\n")
}

int main()
{
    int tab1[2][3], tab2[2][3]={{1,2,-3},{4,5,6}};


    return 0;
}
