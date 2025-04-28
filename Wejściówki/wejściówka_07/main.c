#include <stdio.h>
#include <stdlib.h>

int length(char *txt) {
    int i = 0;
    int len = 0;

    while (*(txt + i) != '\0') {
        len++;
        if (*(txt + i) >= 'a' && *(txt + i) <= 'z') {
            len++;
        }
        i++;
    }

    return len;
}

int main() {
    printf("MARCHEw - %d\n", length("MARCHEw"));
    return 0;
}
