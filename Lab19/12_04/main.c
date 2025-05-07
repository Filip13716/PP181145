#include <stdio.h>
#include <stdlib.h>

int minColIdx(int n, int m, int **tab){
    int min_val = tab[0][0];
    int min_coll = 0;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(tab[j][i] < min_val){
                min_val = tab[j][i];
                min_coll = i;
            }
        }
    }

    return min_coll + 1;
}

int main()
{
    int **tab=malloc(4*sizeof(int*));
    tab[0]=malloc(3*sizeof(int));
    tab[1]=malloc(3*sizeof(int));
    tab[2]=malloc(3*sizeof(int));
    tab[3]=malloc(3*sizeof(int));

    tab[0][0]=  1; tab[0][1]=  2; tab[0][2]= -3;
    tab[1][0]=  4; tab[1][1]=  5; tab[1][2]=  6;
    tab[2][0]= -2; tab[2][1]=  1; tab[2][2]=  5;
    tab[3][0]=  4; tab[3][1]= -3; tab[3][2]=  7;

    printf("%d\n", minColIdx(4,3,tab));

    for(int i = 0; i < 4; i++){
        free(tab[i]);
    }
    free(tab);

    return 0;
}
