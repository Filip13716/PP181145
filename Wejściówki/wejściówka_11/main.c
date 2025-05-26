//Wariant 24U

#include <stdio.h>
#include <stdlib.h>

struct House{
    char *adress;
    int room_count;
};

int list_room(struct House tab[], int n){
    int temp=tab[0].room_count;

    for(int i=1; i<n; i++){
        if(temp>tab[i].room_count) temp=tab[i].room_count;
    }

    return temp;
}

int main()
{
    struct House h1={"Polna 24", 100};
    struct House h2={"Polna 25", 50};
    struct House h3={"Polna 26", 4};

    struct House tab[]={h1, h2, h3};

    printf("Najmniejsza liczba pokoi na Polnej to: %d\n", list_room(tab, 3));

    return 0;
}
