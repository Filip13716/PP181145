#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void printListWithoutHead(struct element *tab){
    if(tab==NULL) printf("Lista jest pusta\n");

    struct element *ptr=tab;

    while(ptr != NULL){
        printf("%d\n", ptr->x);
        ptr=ptr->next;
    }
}

int main()
{
    struct element * nul=NULL;
    struct element * list=malloc(sizeof(struct element));
    list->x=4;
    list->next=malloc(sizeof(struct element));
    list->next->x=5;
    list->next->next=malloc(sizeof(struct element));
    list->next->next->x=-12;
    list->next->next->next=NULL;

    printListWithoutHead(list);
    printListWithoutHead(nul);

    return 0;
}
