#include <stdio.h>
#include <stdlib.h>

struct Computer{
    char * brand;
    int cores;
};

int maxCore(struct Computer tab[], int n){
    int temp=tab[0].cores;

    for(int i=1; i<n; i++){
        if(temp<tab[i].cores) temp=tab[i].cores;
    }

    return temp;
}

int main()
{
    struct Computer c1={"Asus", 10};
    struct Computer c2={"HP", 20};
    struct Computer c3={"Lenovo", 30};
    struct Computer c4={"Apple", 5};

    struct Computer tab[]={c1, c2, c3, c4};

    printf("Maksymalna liczba rdzeni: %d", maxCore(tab, 4));

    return 0;
}
