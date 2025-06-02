#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

int find(struct element * tab, int a){
    struct element * ptr=tab;

    while(ptr != NULL){
        if(ptr->x=a) return 1;
        ptr=ptr->next;
    }

    return 0;
}

int main()
{
    struct element * list=malloc(sizeof(struct element));
    list->x=4;
    list->next=malloc(sizeof(struct element));
    list->next->x=5;
    list->next->next=malloc(sizeof(struct element));
    list->next->next->x=-12;
    list->next->next->next=NULL;

    printf("%d", find(list, 5));

    return 0;
}
