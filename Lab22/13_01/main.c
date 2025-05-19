#include <stdio.h>
#include <stdlib.h>

struct Car{
    char *brand;
    char model[20];
    int year;
    int isAvailable;
};

int main()
{
    struct Car c1={"Opel", "Corsa", 2025, 1};
    struct Car c2={"Toytoa", "Corolla", 1999, 0};

    printf("Marka: %s\n", c1.brand);
    printf("Model: %s\n", c1.model);
    printf("Rok produkcji: %d\n", c1.year);
    printf("Czy jest dostepny? %s\n\n---\n", c1.isAvailable ? "Tak" : "Nie");

    printf("Marka: %s\n", c2.brand);
    printf("Model: %s\n", c2.model);
    printf("Rok produkcji: %d\n", c2.year);
    printf("Czy jest dostepny? %s\n\n---\n", c2.isAvailable ? "Tak" : "Nie");

    return 0;
}
