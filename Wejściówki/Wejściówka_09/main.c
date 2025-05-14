//Wariant 20M

#include <stdio.h>
#include <stdlib.h>

int divThree(int n, int m, int **tab){
    int counter=0;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(abs(tab[i][j])%3==0) counter++;
        }
    }

    return counter;
}

int main()
{
    int **tab=malloc(2*sizeof(int*));
    tab[0]=malloc(3*sizeof(int));
    tab[1]=malloc(3*sizeof(int));

    tab[0][0]= 15; tab[0][1]=  1; tab[0][2]=  3;
    tab[1][0]=  5; tab[1][1]= 22; tab[1][2]= -33;

    printf("%d", divThree(2,3, tab));

    free(tab[0]);
    free(tab[1]);
    free(tab);

    return 0;
}
