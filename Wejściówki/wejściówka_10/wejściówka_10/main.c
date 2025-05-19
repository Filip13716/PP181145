// Wariant 371

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct Book {
    char *title;
    char author[50];
    int publicationYear;
    bool isInLibrary;
};

int main()
{
    struct Book panTadeus;

    panTadeus.title = "Pan Tadeusz";
    strcpy(panTadeus.author, "Adam Mickiewicz");
    panTadeus.publicationYear = 1834;
    panTadeus.isInLibrary = 1;

    struct Book ksiazka;

    ksiazka.title = "Diuna";
    strcpy(ksiazka.author, "Frank Herbert");
    ksiazka.publicationYear = 1965;
    ksiazka.isInLibrary = 0;

    printf("Tytul: %s\n", panTadeus.title);
    printf("Autor: %s\n", panTadeus.author);
    printf("Rok publikacji: %d\n", panTadeus.publicationYear);
    printf("Czy w bibliotece: %s\n", panTadeus.isInLibrary ? "Tak" : "Nie");

    return 0;
}
