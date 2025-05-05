//Wariant 164

#include <stdio.h>
#include <stdlib.h>

char* nohash(char *txt){
    int a = hashes(txt);
    char *temp = malloc((length(txt) - a + 1) * sizeof(char));

    int n = 0;

    for (int i = 0; i <= length(txt); i++) {
        if (*(txt + i) != '#') {
            *(temp + n) = *(txt + i);
            n++;
        }
    }

    return temp;
}

int hashes(char *txt){
    int n = 0;
    for (int i = 0; i < length(txt); i++) {
        if (*(txt + i) == '#') n++;
    }
    return n;
}

int length(char *txt){
    int i = 0;
    while (*(txt + i) != '\0') i++;
    return i;
}

int main() {
    char *txt = "Ol#sz#t#y#n";
    char *cleaned = nohash(txt);

    printf("Oryginalny: %s\n", txt);
    printf("Bez hashy: %s\n", cleaned);

    free(cleaned);
    return 0;
}
