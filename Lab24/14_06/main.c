#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void printOdd(struct element * tab){
    if(tab==NULL) printf("Lista jest pusta\n");

    struct element *ptr=tab->next;

    while(ptr != NULL){
        if(ptr->x<0) printf("%d\n", ptr->x);
        ptr=ptr->next;
    }
}

int main()
{
    struct element *list=malloc(sizeof(struct element));
    list->next=malloc(sizeof(struct element));
    list->next->x=4;
    list->next->next=malloc(sizeof(struct element));
    list->next->next->x=5;
    list->next->next->next=malloc(sizeof(struct element));
    list->next->next->next->x=-12;
    list->next->next->next->next=NULL;

    printOdd(list);

    return 0;
}
