#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char * firstName;
    char * lastName;
    int id;
    float gtp;
} Student;

int main()
{
    Student s1 ={"Marek", "Pazdzioch", 1, 3.0};
    Student s2 ={"Arek", "Kiepski", 2, 4.0};
    Student s3 ={"Zbigniew", "Boczek", 3, 2.7};

    Student tab[]={s1, s2, s3};

    for(int i=0; i<3; i++){
        printf("Imie i nazwisko: %s %s\nId: %d\nGpa: %f\n\n", tab[i].firstName, tab[i].lastName, tab[i].id, tab[i].gtp);
    }

    return 0;
}
