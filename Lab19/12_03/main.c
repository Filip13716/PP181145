#include <stdio.h>
#include <stdlib.h>

int maxRowIdx(int n, int m, int tab[n][m]){
    int min_val=tab[0][0];
    int min_row;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(tab[i][j]<min_val){
                min_val=tab[i][j];
                min_row=i;
            }
        }
    }

    return min_row+1;
}

int main()
{
    int tab[2][3]={{1,2,-4},{7,8,-5}};

    printf("%d\n", maxRowIdx(2,3,tab));

    return 0;
}
