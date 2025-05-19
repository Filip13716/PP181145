#include <stdio.h>
#include <stdlib.h>

typedef struct{
    float width;
    float height;
    char * color;
} Rectangle;

int main()
{
    Rectangle r1={10.5, 5.1, "#00FFFF"};
    Rectangle r2={20, 43.22, "black"};
    Rectangle r3={583, 123, "red"};
    Rectangle r4={5, 5, "yellow"};

    Rectangle tab[]={r1, r2, r3, r4};

    for(int i =0; i<4; i++){
        printf("Wymiary: %f x %f\nKolor: %s\n\n", tab[i].width, tab[i].height, tab[i].color);
    }

    return 0;
}
